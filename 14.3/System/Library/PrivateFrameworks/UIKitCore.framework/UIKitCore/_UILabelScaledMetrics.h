@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject

@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } scaledSize;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) long long measuredNumberOfLines;
@property (retain, nonatomic) NSAttributedString *scaledAttributedText;
@property (nonatomic) struct CGSize { double width; double height; } unscaledAndPossiblyTooLargeSize;
@property (nonatomic) double unscaledFirstBaselineOffset;

- (void).cxx_destruct;

@end
