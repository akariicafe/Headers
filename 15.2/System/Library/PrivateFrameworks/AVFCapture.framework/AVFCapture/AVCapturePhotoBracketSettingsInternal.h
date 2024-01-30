@class NSArray;

@interface AVCapturePhotoBracketSettingsInternal : NSObject {
    NSArray *bracketedSettings;
    BOOL lensStabilizationEnabled;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
