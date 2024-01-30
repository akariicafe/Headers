@class NSString;

@interface AEEmptyFeatureFlags : NSObject <AEFeatureFlags>

@property (readonly, nonatomic, getter=isiOSAgentEnabled) BOOL iOSAgentEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
