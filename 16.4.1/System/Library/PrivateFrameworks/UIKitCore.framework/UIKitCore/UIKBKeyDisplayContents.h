@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject

@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSString *displayStringImage;
@property (retain, nonatomic) NSArray *secondaryDisplayStrings;
@property (retain, nonatomic) NSArray *secondaryDisplayStringImages;
@property (retain, nonatomic) NSString *bundlePathOverride;
@property (retain, nonatomic) NSArray *variantDisplayContents;
@property (retain, nonatomic) NSArray *highlightedVariantsList;
@property (nonatomic) long long displayPathType;
@property (nonatomic) BOOL fillPath;
@property (nonatomic) BOOL force1xImages;
@property (nonatomic) BOOL stringKeycapOverImage;
@property (nonatomic) BOOL flipImageHorizontally;
@property (nonatomic) BOOL forceImageKeycap;
@property (retain, nonatomic) UIKBKeyDisplayContents *fallbackContents;

+ (id)displayContents;

- (id)description;
- (void).cxx_destruct;

@end
