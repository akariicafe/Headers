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

- (id)textLabel;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (BOOL)_updateViewContent;
- (id)initWithReuseIdentifier:(id)a0 type:(unsigned long long)a1;

@end
