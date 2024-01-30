@class SBIconView;
@protocol SBHScrollableIconViewContaining;

@interface SBHScrollableIconViewInteraction : NSObject {
    SBIconView *_cachedInteractingIconView;
}

@property (readonly, weak, nonatomic) id<SBHScrollableIconViewContaining> container;

- (id)initWithContainer:(id)a0;
- (double)_clippingFudgeInset;
- (void)handleTargetIconViewClipped:(id)a0;
- (void).cxx_destruct;
- (BOOL)isIconViewTheInteractingTargetIconView:(id)a0;
- (id)_findInteractingIconView;
- (void)clippingScrollViewDidScroll:(id)a0;
- (void)updateScrolling:(BOOL)a0;

@end
