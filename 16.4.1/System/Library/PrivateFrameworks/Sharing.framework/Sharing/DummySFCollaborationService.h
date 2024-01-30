@class NSString;

@interface DummySFCollaborationService : NSObject <SFCollaborationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestDefaultShareModeCollaborationForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
