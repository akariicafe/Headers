@class NSDictionary;

@interface NTKExtragalacticDigitDrawInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } unifiedGlyphSize;
@property (retain, nonatomic) NSDictionary *paths;

+ (id)drawInfoWithUnifiedSize:(struct CGSize { double x0; double x1; })a0 paths:(id)a1;

- (void).cxx_destruct;
- (id)initWithUnifiedSize:(struct CGSize { double x0; double x1; })a0 paths:(id)a1;

@end
