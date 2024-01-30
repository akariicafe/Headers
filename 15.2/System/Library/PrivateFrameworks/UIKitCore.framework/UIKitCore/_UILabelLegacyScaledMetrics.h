@class NSAttributedString;

@interface _UILabelLegacyScaledMetrics : NSObject {
    double _actualScaleFactor;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    long long _measuredNumberOfLines;
    NSAttributedString *_scaledAttributedText;
    double _scaledFirstBaselineOffset;
    struct CGSize { double width; double height; } _scaledSize;
    struct CGSize { double width; double height; } _unscaledAndPossiblyTooLargeSize;
}

- (void).cxx_destruct;

@end
