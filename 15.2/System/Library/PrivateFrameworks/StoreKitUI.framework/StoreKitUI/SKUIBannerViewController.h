@class NSString, UIImage, SKUIItemStateCenter, SKUIClientContext, NSOperationQueue, NSDictionary, SKUIBannerView, NSMutableArray, SKUIItemArtworkContext, SSLookupItem;
@protocol SKUIBannerViewDelegate;

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver> {
    SKUIBannerView *_bannerView;
    UIImage *_iconImage;
    SSLookupItem *_item;
    long long _itemIdentifier;
    SKUIItemStateCenter *_itemStateCenter;
    NSMutableArray *_screenshotImages;
    SKUIItemArtworkContext *_itemArtworkContext;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUIBannerViewDelegate> delegate;
@property (retain, nonatomic) NSOperationQueue *resourceOperationQueue;
@property (copy, nonatomic) NSDictionary *scriptContextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (id)_itemState;
- (id)_iconImage;
- (void)_finishWithResponse:(id)a0 error:(id)a1;
- (void)dealloc;
- (void)_launchApp;
- (void)loadWithProductParameters:(id)a0 mainDocumentURL:(id)a1;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)_warmItemStateCenter;
- (void)_closeButtonAction:(id)a0;
- (void)_bannerViewAction:(id)a0;
- (void)_reloadBannerView;
- (void)_loadImages;
- (id)_itemArtworkContext;
- (void)_launchURL:(id)a0 withBundleIdentifier:(id)a1;
- (void)_setIcon:(id)a0 error:(id)a1;
- (id)_screenshotConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setScreenshot:(id)a0 forIndex:(long long)a1 error:(id)a2;

@end
