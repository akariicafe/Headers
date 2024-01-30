@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) double compactHeight;
@property (nonatomic) double expandedHeight;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *resizeProgress;

- (void).cxx_destruct;

@end
