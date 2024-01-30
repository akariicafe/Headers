@class PKSharedCredentialsGroupController, PKSharedCredentialGroup;

@interface PKSharedCredentialTableViewCell : PKAvatarTableViewCell {
    PKSharedCredentialsGroupController *_groupController;
}

@property (retain, nonatomic) PKSharedCredentialGroup *group;

- (void)updateCellWithContact:(id)a0;
- (id)localizedGroupState;
- (id)initWithGroup:(id)a0 groupController:(id)a1 reuseIdentifier:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
