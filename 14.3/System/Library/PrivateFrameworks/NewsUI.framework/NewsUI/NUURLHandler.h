@class NSString, NSMutableArray;
@protocol NUURLHandling, NUWebViewControllerFactory, NUURLHandlerDelegate, NUPreviewViewControllerFactory;

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing>

@property (readonly, nonatomic) id<NUURLHandling> URLHandling;
@property (readonly, nonatomic) BOOL universalLinksEnabled;
@property (readonly, nonatomic) NSMutableArray *modifiers;
@property (weak, nonatomic) id<NUURLHandlerDelegate> delegate;
@property (retain, nonatomic) id<NUWebViewControllerFactory> webViewControllerFactory;
@property (retain, nonatomic) id<NUPreviewViewControllerFactory> previewViewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeModifier:(id)a0;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0 animated:(BOOL)a1;
- (void)openURL:(id)a0;
- (void)commitViewController:(id)a0 URL:(id)a1;
- (void)addModifier:(id)a0;
- (id)viewControllerForURL:(id)a0;
- (id)modifyURL:(id)a0;
- (id)initWithURLHandling:(id)a0 universalLinksEnabled:(BOOL)a1;

@end
