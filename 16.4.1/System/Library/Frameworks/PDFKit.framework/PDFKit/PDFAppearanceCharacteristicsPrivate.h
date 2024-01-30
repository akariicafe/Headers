@class UIColor, NSString;

@interface PDFAppearanceCharacteristicsPrivate : NSObject {
    UIColor *backgroundColor;
    UIColor *borderColor;
    long long rotation;
    long long controlType;
    NSString *caption;
    NSString *rolloverCaption;
    NSString *downCaption;
    struct CGPDFForm { } *icon;
    int scaleCircumstance;
    BOOL scaleProportional;
}

- (void).cxx_destruct;

@end
