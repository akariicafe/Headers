@class NSString, UILabel;

@interface PUCurationTripKeyAssetDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
