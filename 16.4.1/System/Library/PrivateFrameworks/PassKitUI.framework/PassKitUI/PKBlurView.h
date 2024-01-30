@class CAFilter;

@interface PKBlurView : UIView {
    CAFilter *_filter;
}

@property (nonatomic) double blurRadius;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)a0;
- (void).cxx_destruct;

@end
