@class NSArray, NSTimer, IMOneTimeCodeUtilities;
@protocol IMDaemonListenerProtocol;

@interface IMDOneTimeCodeManager : NSObject

@property (retain, nonatomic) NSArray *validCodes;
@property (retain, nonatomic) NSTimer *codeInvalidationTimer;
@property (retain, nonatomic) id<IMDaemonListenerProtocol> broadcaster;
@property (retain, nonatomic) id<IMDaemonListenerProtocol> broadcasterOverride;
@property (retain, nonatomic) IMOneTimeCodeUtilities *otcUtilities;

+ (id)sharedInstance;

- (void)consumeCodeWithGuid:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_setNewCodeAndPrepareInvalidationTimer:(id)a0;
- (void)broadcastCodeStatusToClients;
- (id)initWithBroadcaster:(id)a0 otcUtilities:(id)a1;
- (void)startTrackingCode:(id)a0;

@end
