@class NSString, UIColor, UILabel;

@interface PUCurationClassificationSignalAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_scoreLabel;
}

@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) UIColor *color;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
