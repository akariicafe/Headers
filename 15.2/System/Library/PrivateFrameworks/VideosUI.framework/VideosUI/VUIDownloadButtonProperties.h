@class UIImage, NSString;

@interface VUIDownloadButtonProperties : NSObject

@property (nonatomic) BOOL hasBorder;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL hasBadgeImage;
@property (retain, nonatomic) UIImage *badgeImage;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isInderminate) BOOL indeterminate;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long downloadState;

- (void).cxx_destruct;

@end
