@class NSString;

@interface PUPhotoStreamAlbumTableViewCell : UITableViewCell

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;

+ (double)cellHeight;
+ (double)labelHorizontalInset;
+ (double)labelXOriginForContentWidth:(double)a0 labelWidth:(double)a1 isRTL:(BOOL)a2;

- (void)layoutSubviews;

@end
