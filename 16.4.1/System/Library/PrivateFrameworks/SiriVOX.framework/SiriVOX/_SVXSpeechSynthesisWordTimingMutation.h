@class NSString, SVXSpeechSynthesisWordTiming;

@interface _SVXSpeechSynthesisWordTimingMutation : NSObject <SVXSpeechSynthesisWordTimingMutating> {
    SVXSpeechSynthesisWordTiming *_baseModel;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    double _timeInterval;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRange : 1; unsigned char hasTimeInterval : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)generate;
- (id)init;
- (void)setTimeInterval:(double)a0;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;

@end
