@class NSString;

@interface __NSFontExtraData : NSObject {
    double _ascender;
    double _lineHeight;
    struct { unsigned char _isSystemFont : 1; unsigned char _isIBScaledFont : 1; } _fFlags;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqualToExtraData:(id)a0;

@end
