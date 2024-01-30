@class NSString;

@interface TVURLDescription : TVViewDescription

@property (retain, nonatomic) NSString *url;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double focusSizeIncrease;
@property (retain, nonatomic) NSString *cropCode;
@property (retain, nonatomic) NSString *urlFormat;
@property (nonatomic) BOOL centerGrowth;

- (void).cxx_destruct;
- (id)initUrlWithProperties:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 focusSizeIncrease:(double)a2 cropCode:(id)a3 urlFormat:(id)a4;

@end
