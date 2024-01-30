@class PKFamilyMemberRowModel, PKFamilyMember, UIImage;

@interface PKFamilyMemberTableViewCell : UITableViewCell {
    PKFamilyMember *_familyMember;
    UIImage *_familyMemberImage;
    unsigned long long _state;
}

@property (retain, nonatomic) PKFamilyMemberRowModel *rowModel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setFamilyMember:(id)a0;
- (void)setFamilyMemberImage:(id)a0;
- (void)setState:(unsigned long long)a0;

@end
