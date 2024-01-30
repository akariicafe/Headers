@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSMSNExceptionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *announceMessageExceptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)beginAnnounceMessageException:(id)a0 reason:(id)a1;
- (void)endAnnounceMessageException:(id)a0 reason:(id)a1;

@end
