@class UILabel;

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel;

- (id)_associatedScalingLabel;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_disabledFontColor;
- (id)_parentSegment;
- (void).cxx_destruct;
- (id)init;

@end
