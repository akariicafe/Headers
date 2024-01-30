@class NSString, SKUIClientContext, NSOperationQueue, SKUIPassbookLoader;
@protocol SKUIURLResolverDelegate, UINavigationControllerDelegate;

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate> {
    SKUIClientContext *_clientContext;
    SKUIPassbookLoader *_passbookLoader;
}

@property (weak, nonatomic) id<SKUIURLResolverDelegate> delegate;
@property (weak, nonatomic) id<UINavigationControllerDelegate> navigationControllerDelegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabIdentifierForURL:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithClientContext:(id)a0;
- (void)_presentViewController:(id)a0;
- (void)_sendDidFinishWithResult:(BOOL)a0;
- (void)_showBagURLWithURL:(id)a0;
- (void)_showAccountViewControllerWithURL:(id)a0;
- (void)_addPassbookPassWithURL:(id)a0;
- (void)_showDonationViewControllerWithURL:(id)a0;
- (void)_showGiftViewControllerWithURL:(id)a0;
- (void)_handleSafariScriptDataUpdate:(id)a0;
- (void)_performLookupWithURL:(id)a0;
- (void)_showRedeemViewControllerWithURL:(id)a0;
- (void)_showSearchWithURL:(id)a0;
- (void)_selectTabWithIdentifier:(id)a0;
- (void)_resolveURLRequest:(id)a0 withOriginURL:(id)a1;
- (void)_showPlaceholderViewController;
- (void)_showViewControllerWithResponse:(id)a0 fromOperation:(id)a1;
- (id)_newHTMLViewControllerWithSection:(id)a0;
- (id)presentationViewControllerForPassbookLoader:(id)a0;
- (void)passbookLoaderDidFinish:(id)a0;
- (void)resolveURL:(id)a0;

@end
