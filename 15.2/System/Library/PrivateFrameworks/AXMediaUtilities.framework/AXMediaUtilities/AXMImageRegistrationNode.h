@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {
    AXMPipelineContextInput *_previousInput;
    AXMPipelineContextInput *_currentInput;
    struct CGPoint { double x; double y; } _transpositionHistoryCircularBuffer[10];
    unsigned long long _transpositionHistoryLastRecordedIndex;
    BOOL _fillingHistoryBuffer;
    long long _registrationState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long registrationState;

+ (id)title;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (void)_resetTranspositionHistory;
- (id)_translationalImageRegistrationRequestForInput:(id)a0;
- (void)_recordTransposition:(struct CGPoint { double x0; double x1; })a0;
- (void)_resetImageRegistration;

@end
