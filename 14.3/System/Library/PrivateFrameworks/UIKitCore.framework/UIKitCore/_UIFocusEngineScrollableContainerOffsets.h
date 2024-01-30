@protocol UIScrollViewDelegate, UIFocusItemScrollableContainer;

@interface _UIFocusEngineScrollableContainerOffsets : NSObject

@property (retain, nonatomic) id<UIFocusItemScrollableContainer> scrollableContainer;
@property (retain, nonatomic) id<UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) double convergenceRate;
@property (nonatomic) struct CGPoint { double x; double y; } lastVelocity;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
