@class NSString, NSArray;

@interface SSShortcutResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isBackgroundRunnable;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSString *numberOfActionsString;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;
@property (retain, nonatomic) NSString *thumbnailURL;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTrailingThumbnail;

@end
