@class UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell

@property (retain, nonatomic) UILabel *addLabel;

+ (id)reuseIdentifier;
+ (double)preferredHeight;
+ (Class)cellClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
