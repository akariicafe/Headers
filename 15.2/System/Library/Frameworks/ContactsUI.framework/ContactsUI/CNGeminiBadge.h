@class CNLabeledBadge, NSDictionary;

@interface CNGeminiBadge : UIView

@property (retain, nonatomic) CNLabeledBadge *labeledBadge;
@property (copy, nonatomic) NSDictionary *viewAttributes;

+ (id)geminiBadgeWithText:(id)a0;

- (void)setText:(id)a0;
- (void).cxx_destruct;

@end
