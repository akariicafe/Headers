@class NSString;
@protocol _EXSceneConfigurationProviding;

@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>

@property (retain) id<_EXSceneConfigurationProviding> sceneConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeContentViewController;
- (void).cxx_destruct;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
