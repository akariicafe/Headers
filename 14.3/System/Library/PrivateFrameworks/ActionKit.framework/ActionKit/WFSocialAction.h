@class NSString;

@interface WFSocialAction : WFShareExtensionAction

@property (readonly, nonatomic) NSString *postPrefix;

+ (id)userInterfaceProtocol;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithoutUserInterfaceWithInput:(id)a0;
- (BOOL)convertsAnimatedImagesToVideo;
- (void)convertAnimatedImagesToVideoWithInput:(id)a0 completionHandler:(id /* block */)a1;

@end
