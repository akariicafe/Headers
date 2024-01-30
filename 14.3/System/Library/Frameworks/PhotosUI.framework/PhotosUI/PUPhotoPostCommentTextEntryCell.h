@class PUPhotoCommentEntryView;

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell

@property (retain, nonatomic) PUPhotoCommentEntryView *textEntryView;

+ (void)preferredContentSizeDidChange;
+ (double)heightForWidth:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
