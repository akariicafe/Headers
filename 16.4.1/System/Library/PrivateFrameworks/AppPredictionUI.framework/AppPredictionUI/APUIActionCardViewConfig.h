@class NSString;

@interface APUIActionCardViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL showThumbnailImage;
@property (nonatomic) BOOL useAppIconAsThumbnail;
@property (nonatomic) BOOL showActionButton;
@property (nonatomic) BOOL showAppFootnote;
@property (nonatomic) BOOL showAppFootnoteIcon;
@property (nonatomic) BOOL useTinyIconVariant;
@property (nonatomic) long long maxLinesForTitle;
@property (nonatomic) long long maxLinesForSubtitle;
@property (nonatomic) long long maxLinesForFootnote;
@property (nonatomic) BOOL fallbackToCustomResponseString;

- (id)init;
- (void).cxx_destruct;

@end
