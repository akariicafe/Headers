@class SBTraitsSceneParticipantDelegate, NSString, SBSingleSceneWindow, FBScene;

@interface SBSystemUISceneDefaultPresenter : NSObject <SBScenePresenting> {
    FBScene *_scene;
    SBTraitsSceneParticipantDelegate *_sceneTraitsDelegate;
}

@property (nonatomic, getter=usesWindowHosting) BOOL windowHosting;
@property (readonly, nonatomic) SBSingleSceneWindow *hostingWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)presentScene:(id)a0 viewControllerBuilderBlock:(id /* block */)a1;
- (void)scene:(id)a0 didChangeTraitsParticipantDelegate:(id)a1;
- (void)scene:(id)a0 hasVisibleContent:(BOOL)a1;
- (void)sceneDidChangeDisplayIdentity:(id)a0;

@end
