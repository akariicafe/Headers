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

+ (id)photoPapers;
+ (id)generic3_5x5Paper;
+ (id)generic4x6Paper;
+ (id)genericLetterPaper;
+ (id)genericA4Paper;
+ (id)documentPapers;
+ (id)genericA6Paper;
+ (id)genericPRC32KPaper;
+ (id)genericWithName:(id)a0;
+ (BOOL)useMetric;
+ (id)mediaNameForWidth:(int)a0 Height:(int)a1 mediaType:(id)a2 Borderless:(BOOL)a3 Simplex:(BOOL)a4;
+ (id)genericHagakiPaper;
+ (id)genericBorderlessWithName:(id)a0;
+ (id)defaultGenericPaperForLocale:(id)a0;
+ (id)paperWithAttributes:(id)a0;
+ (id)rollPaperWithAttributes:(id)a0;
+ (id)genericLegalPaper;
+ (BOOL)willAdjustMarginsForDuplexMode:(id)a0;

- (BOOL)isRoll;
- (BOOL)isEqualSizeAndMediaType:(id)a0;
- (void)dealloc;
- (unsigned long long)maxCutLength;
- (unsigned long long)minCutLength;
- (id)localizedName;
- (unsigned long long)hash;
- (unsigned long long)topMarginInPoints;
- (unsigned long long)bottomMarginInPoints;
- (id)mediaTypeName;
- (id)baseName;
- (BOOL)isEqual:(id)a0;
- (id)cutToLength:(double)a0;
- (id)initWithWidth:(int)a0 Height:(int)a1 Left:(int)a2 Top:(int)a3 Right:(int)a4 Bottom:(int)a5 localizedName:(id)a6 codeName:(id)a7;
- (id)cutToPWGLength:(int)a0;
- (id)nameWithoutSuffixes:(id)a0;
- (void)addToMediaCol:(struct _ipp_s { } *)a0;
- (double)imageableArea;
- (id)localizedNameFromDimensions;
- (id)initWithPWGSize:(struct pwg_size_s { struct pwg_map_s { char *x0; char *x1; } x0; int x1; int x2; int x3; int x4; int x5; int x6; } *)a0 localizedName:(id)a1 codeName:(id)a2;
- (struct _ipp_s { } *)createMediaColAndDoMargins:(BOOL)a0;
- (BOOL)isEqualSize:(id)a0;
- (long long)sizeAndImageableCompare:(id)a0;
- (long long)sizeMediaTypeAndImageableCompare:(id)a0;
- (id)paperWithMarginsAdjustedForDuplexMode:(id)a0;

@end
