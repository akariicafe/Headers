@class RBSTarget, NSMutableDictionary, NSArray, NSLock, NSObject;
@protocol OS_os_log;

@interface _CPInhibitorManager : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *os_log;
@property (retain, nonatomic) NSMutableDictionary *inhibitorMap;
@property (retain, nonatomic) NSLock *inhibitorMapLock;
@property (nonatomic) BOOL isProcessRunningBoardManaged;
@property (retain, nonatomic) RBSTarget *runningBoardTarget;
@property (retain, nonatomic) NSArray *runningBoardAttributes;

+ (id)sharedInstance;

- (void)pushAssertion:(id)a0 withIdentifier:(id)a1;
- (void)stopInhibitorWithIdentifier:(id)a0;
- (id)startAnInhibitor;
- (id)popAssertionWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
