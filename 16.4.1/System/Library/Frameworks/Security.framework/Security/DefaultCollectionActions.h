@class NSString;

@interface DefaultCollectionActions : NSObject <SFAnalyticsCollectionAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoBugCaptureWithType:(id)a0 subType:(id)a1 domain:(id)a2;
- (void)tapToRadar:(id)a0 description:(id)a1 radar:(id)a2 componentName:(id)a3 componentVersion:(id)a4 componentID:(id)a5;

@end
