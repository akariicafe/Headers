@class NSArray;

@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *inputCorrectionInfo;

+ (id)inputCorrectionInfoKey;

- (BOOL)hasCorrections;
- (id)pasteKeysForMediaType:(long long)a0;

@end
