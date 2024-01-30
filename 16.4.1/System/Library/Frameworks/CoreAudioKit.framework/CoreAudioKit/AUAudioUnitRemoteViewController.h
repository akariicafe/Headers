@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitViewControllerHostInterface> {
    BOOL _sizePending;
}

+ (void)_fetchViewControllerForExtension:(id)a0 inputItems:(id)a1 completion:(id /* block */)a2;
+ (void)_fetchViewController:(id)a0 requestIdentifier:(id)a1 completion:(id /* block */)a2;

@end
