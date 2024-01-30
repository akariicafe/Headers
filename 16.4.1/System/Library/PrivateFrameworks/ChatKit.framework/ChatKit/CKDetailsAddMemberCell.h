@class UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell

@property (retain, nonatomic) UILabel *addLabel;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (Class)cellClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
