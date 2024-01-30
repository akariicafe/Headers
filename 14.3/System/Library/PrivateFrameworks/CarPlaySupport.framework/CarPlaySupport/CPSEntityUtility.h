@class CARSessionStatus, CARSession;

@interface CPSEntityUtility : NSObject

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly, nonatomic) CARSession *currentSession;
@property (readonly, nonatomic) BOOL rightHandDrive;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
