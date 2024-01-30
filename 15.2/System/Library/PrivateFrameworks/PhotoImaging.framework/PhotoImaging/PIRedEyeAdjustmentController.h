@class NSArray;

@interface PIRedEyeAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSArray *inputCorrectionInfo;

+ (id)inputCorrectionInfoKey;

- (BOOL)hasCorrections;

@end
