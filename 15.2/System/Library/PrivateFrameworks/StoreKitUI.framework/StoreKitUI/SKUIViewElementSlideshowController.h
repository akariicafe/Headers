@class NSString, SKUIViewElementLayoutContext, SKUISlideshowViewController, SKUIIPhoneSlideshowViewController, NSMutableArray;
@protocol SKUIViewElementSlideshowDelegate;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property (retain, nonatomic) NSMutableArray *dataConsumers;
@property (weak, nonatomic) id<SKUIViewElementSlideshowDelegate> delegate;
@property (retain, nonatomic) SKUIViewElementLayoutContext *layoutContext;
@property (readonly, nonatomic) long long numberOfSlideshowItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)presentFromParentViewController:(id)a0;
- (long long)numberOfItemsInSlideshowViewController:(id)a0;
- (id)slideshowViewController:(id)a0 dataConsumerAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 imageURLAtIndex:(long long)a1;
- (id)slideshowViewController:(id)a0 placeholderImageAtIndex:(long long)a1;
- (void)slideshowViewControllerDidFinish:(id)a0;
- (id)initWithShelf:(id)a0 selectedLockup:(id)a1;

@end
