@class CLKFont;

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject

@property (retain, nonatomic) CLKFont *subtitleFont;
@property (nonatomic) double subtitleBaselineOffset;
@property (nonatomic) double marginWidth;
@property (nonatomic) double imageOriginY;
@property (nonatomic) double imageHeight;
@property (nonatomic) double minimumFontSize;
@property (retain, nonatomic) CLKFont *titleFont;
@property (nonatomic) double titleBaselineOffset;

+ (id)attributesForTemplate:(id)a0 forDevice:(id)a1;

- (void).cxx_destruct;

@end
