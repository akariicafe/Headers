@class PUPhotoCommentEntryView;

@interface PUPhotoPostCommentTextEntryCell : UITableViewCell

@property (retain, nonatomic) PUPhotoCommentEntryView *textEntryView;

+ (double)heightForWidth:(double)a0;
+ (void)preferredContentSizeDidChange;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
