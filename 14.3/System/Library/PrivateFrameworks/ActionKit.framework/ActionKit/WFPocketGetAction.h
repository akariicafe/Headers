@class NSString;

@interface WFPocketGetAction : WFAction <PocketAPIDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)pocketAPI:(id)a0 receivedResponse:(id)a1 forAPIMethod:(id)a2 error:(id)a3;

@end
