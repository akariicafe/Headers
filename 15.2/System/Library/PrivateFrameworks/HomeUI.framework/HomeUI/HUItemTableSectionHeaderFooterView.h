@class NSArray, UILabel, HUTappableTextView;
@protocol HFStringGenerator;

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) HUTappableTextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (copy, nonatomic) id<HFStringGenerator> message;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } indentationInset;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)defaultAttributesForType:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)textLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;
- (id)detailTextLabel;
- (id)initWithReuseIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)_updateViewContent;

@end
