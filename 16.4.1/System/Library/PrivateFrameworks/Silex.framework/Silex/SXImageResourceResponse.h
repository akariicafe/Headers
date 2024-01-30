@class UIImage;

@interface SXImageResourceResponse : SXResourceResponse

@property (nonatomic) unsigned long long imageQuality;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;

@end
