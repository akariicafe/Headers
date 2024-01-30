@class UIImage, NSString;
@protocol PBFPosterPreview;

@interface PBFFocusPosterConfigurationMetadata : NSObject

@property (nonatomic, getter=isChecked) BOOL checked;
@property (retain, nonatomic) UIImage *cachedSnapshot;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (copy, nonatomic) NSString *otherFocusSymbolImageName;
@property (copy, nonatomic) NSString *otherFocusDisplayName;

- (void).cxx_destruct;

@end
