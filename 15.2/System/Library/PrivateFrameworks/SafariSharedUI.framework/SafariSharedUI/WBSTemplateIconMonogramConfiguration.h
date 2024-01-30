@class UIColor;

@interface WBSTemplateIconMonogramConfiguration : NSObject

@property (nonatomic) BOOL skipMonogramGeneration;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double baselineOffset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) double cornerRadius;

+ (id)configurationWithBackgroundColor:(id)a0;
+ (id)configurationWithIconSize:(struct CGSize { double x0; double x1; })a0 fontSize:(double)a1 fontWeight:(long long)a2 baselineOffset:(double)a3 backgroundColor:(id)a4 cornerRadius:(double)a5;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
