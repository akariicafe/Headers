@class NSString;

@interface AVCCaptionsToken : NSObject <VCCaptionsTranscriptionSegment>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)description;
- (void)dealloc;
- (id)initWithText:(id)a0 confidence:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
