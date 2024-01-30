@class NSString, NSTextCheckingResult;

@interface PRRecordedCorrection : NSObject {
    NSTextCheckingResult *_correctionResult;
    NSString *_correctedString;
}

@property BOOL hasRecordedResponse;

- (void)dealloc;
- (id)description;
- (id)correctionResult;
- (id)initWithCorrectionResult:(id)a0 correctedString:(id)a1;
- (id)correctedString;

@end
