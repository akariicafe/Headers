@class NSString, NSMutableArray;
@protocol NUWebViewControllerFactoryType, NUURLHandling, NUURLHandlerDelegate, NUPreviewViewControllerFactory;

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing>

@property (readonly, nonatomic) id<NUURLHandling> URLHandling;
@property (readonly, nonatomic) BOOL universalLinksEnabled;
@property (readonly, nonatomic) NSMutableArray *modifiers;
@property (weak, nonatomic) id<NUURLHandlerDelegate> delegate;
@property (retain, nonatomic) id<NUWebViewControllerFactoryType> webViewControllerFactory;
@property (retain, nonatomic) id<NUPreviewViewControllerFactory> previewViewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)commitViewController:(id)a0 URL:(id)a1;
- (id)viewControllerForURL:(id)a0;
- (void)removeModifier:(id)a0;
- (void)addModifier:(id)a0;
- (id)initWithURLHandling:(id)a0 universalLinksEnabled:(BOOL)a1;
- (id)modifyURL:(id)a0;

@end
