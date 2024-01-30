@class CNAvatarView;

@interface CNContactCardFieldPickerPhotoCell : UITableViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)init;
- (void).cxx_destruct;
- (void)prepareCellWithContact:(id)a0;
- (void)setConfiguration;

@end
