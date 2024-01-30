@class NSString, NSDictionary;

@interface PKPaper : NSObject {
    NSString *_baseName;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int leftMargin;
@property (nonatomic) int topMargin;
@property (nonatomic) int rightMargin;
@property (nonatomic) int bottomMargin;
@property (copy, nonatomic) NSDictionary *mediaInfo;
@property (readonly, retain, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *baseName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } paperSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageableAreaRect;
@property (readonly, nonatomic) double imageableArea;
@property (readonly, nonatomic) BOOL isBorderless;
@property (readonly, nonatomic) BOOL isTransverse;
@property (readonly, nonatomic) BOOL isRoll;
@property (readonly, nonatomic) unsigned long long minCutLength;
@property (readonly, nonatomic) unsigned long long maxCutLength;
@property (readonly, retain, nonatomic) NSString *mediaType;
@property (readonly, retain, nonatomic) NSString *mediaTypeName;
@property (readonly, nonatomic) unsigned long long topMarginInPoints;
@property (readonly, nonatomic) unsigned long long bottomMarginInPoints;
@property (readonly, nonatomic) int minHeight;
@property (readonly, nonatomic) int maxHeight;

+ (id)generic4x6Paper;
+ (id)defaultGenericPaperForLocale:(id)a0;
+ (id)documentPapers;
+ (id)generic3_5x5Paper;
+ (id)genericA4Paper;
+ (id)genericA6Paper;
+ (id)genericBorderlessWithName:(id)a0;
+ (id)genericHagakiPaper;
+ (id)genericLegalPaper;
+ (id)genericLetterPaper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)a0;
+ (id)photoPapers;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)a0;
+ (id)mediaNameForWidth:(int)a0 Height:(int)a1 mediaType:(id)a2 Borderless:(BOOL)a3 Simplex:(BOOL)a4;
+ (id)paperWithAttributes:(id)a0;
+ (id)rollPaperWithAttributes:(id)a0;
+ (BOOL)useMetric;

- (id)localizedName;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)baseName;
- (unsigned long long)bottomMarginInPoints;
- (id)cutToLength:(double)a0;
- (BOOL)isEqualSizeAndMediaType:(id)a0;
- (BOOL)isRoll;
- (unsigned long long)maxCutLength;
- (id)mediaTypeName;
- (unsigned long long)minCutLength;
- (unsigned long long)topMarginInPoints;
- (id)cutToPWGLength:(int)a0;
- (void)addToMediaCol:(struct _ipp_s { } *)a0;
- (struct _ipp_s { } *)createMediaColAndDoMargins:(BOOL)a0;
- (double)imageableArea;
- (id)initWithPWGSize:(struct pwg_size_s { struct pwg_map_s { char *x0; char *x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; } *)a0 localizedName:(id)a1 codeName:(id)a2;
- (id)initWithWidth:(int)a0 Height:(int)a1 Left:(int)a2 Top:(int)a3 Right:(int)a4 Bottom:(int)a5 localizedName:(id)a6 codeName:(id)a7;
- (BOOL)isEqualSize:(id)a0;
- (id)localizedNameFromDimensions;
- (id)nameWithoutSuffixes:(id)a0;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)a0;
- (long long)sizeAndImageableCompare:(id)a0;
- (long long)sizeMediaTypeAndImageableCompare:(id)a0;

@end
