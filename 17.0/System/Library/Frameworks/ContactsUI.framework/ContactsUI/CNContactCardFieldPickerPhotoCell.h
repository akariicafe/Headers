@class CNAvatarView;

@interface CNContactCardFieldPickerPhotoCell : UITableViewCell

@property (retain, nonatomic) CNAvatarView *avatarView;

- (id)init;
- (void)prepareForReuse;
- (void)setConfiguration;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareCellWithContact:(id)a0;

@end
