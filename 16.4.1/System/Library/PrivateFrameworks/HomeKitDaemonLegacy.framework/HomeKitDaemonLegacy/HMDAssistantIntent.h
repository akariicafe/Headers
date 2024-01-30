@class NSArray, INControlHomeIntent, NSString;

@interface HMDAssistantIntent : NSObject <HMFLogging>

@property (retain, nonatomic) NSArray *homeKitObjects;
@property (retain, nonatomic) INControlHomeIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (id)_getObjectsWithUUID;
- (void)_handleActionSetForConfirmation:(id)a0 message:(id)a1;
- (void)_handleActionSetForExecution:(id)a0 message:(id)a1;
- (void)_handleIntentRequestMessage:(id)a0;
- (void)performWithGather:(id)a0 message:(id)a1;

@end
