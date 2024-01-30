@class NSString;

@interface CoreRepairHelper : NSObject <CoreRepairHelperProtocol, setupModuleChallengeCallBack>

@property BOOL factoryServiceOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
