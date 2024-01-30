@class UIColor, NSString, NMBUIMediaTableCellDownloadState, UIImage, MPArtworkCatalog;

@interface NMBUIMediaTableCellConfiguration : NSObject

@property (retain, nonatomic) id modelObject;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (retain, nonatomic) NSString *placeholderSystemImageName;
@property (retain, nonatomic) UIColor *placeholderIconColor;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NMBUIMediaTableCellDownloadState *downloadState;
@property (copy, nonatomic) id /* block */ downloadIndicatorTapAction;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void).cxx_destruct;

@end
