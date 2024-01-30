@class AXSpringBoardServer, NSString;

@interface WFOrientationSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) AXSpringBoardServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

@end
