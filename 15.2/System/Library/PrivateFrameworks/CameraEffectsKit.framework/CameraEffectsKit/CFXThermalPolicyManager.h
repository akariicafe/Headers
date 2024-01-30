@class NSString, JFXThermalPolicyManager;

@interface CFXThermalPolicyManager : NSObject <JFXVideoCameraThermalDelegate>

@property (retain, nonatomic) JFXThermalPolicyManager *policyManager;
@property (nonatomic) BOOL recordingPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
