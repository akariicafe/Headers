@class UILabel;

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_disabledFontColor;
- (id)_parentSegment;
- (id)_associatedScalingLabel;

@end
