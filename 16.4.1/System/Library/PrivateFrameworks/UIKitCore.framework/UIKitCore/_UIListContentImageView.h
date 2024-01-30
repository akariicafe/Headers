@class UIColor;

@interface _UIListContentImageView : UIImageView {
    BOOL _hadStroke;
}

@property (retain, nonatomic, setter=_setStrokeColor:) UIColor *_strokeColor;
@property (nonatomic, setter=_setStrokeWidth:) double _strokeWidth;

- (void)_updateStroke;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
