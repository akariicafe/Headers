@class NSSet, NSString;

@interface HUInformationalServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (copy, nonatomic) NSSet *accessoriesToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;

@end
