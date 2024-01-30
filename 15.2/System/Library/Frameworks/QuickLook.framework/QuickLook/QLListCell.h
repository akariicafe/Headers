@class NSString, QLItem, UIImage, NSLayoutConstraint, UILabel, UIImageView;

@interface QLListCell : UITableViewCell {
    NSLayoutConstraint *_leftConstraint;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_thumbnailView;
    long long _loadingID;
}

@property (retain, nonatomic) QLItem *item;
@property (retain, nonatomic) NSString *folderName;
@property (nonatomic) long long fileDepthLevel;
@property (copy, nonatomic) NSString *subtitleString;
@property (retain, nonatomic) UIImage *thumbnail;
@property unsigned long long row;

+ (id)listCell;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_folderImage;

@end
