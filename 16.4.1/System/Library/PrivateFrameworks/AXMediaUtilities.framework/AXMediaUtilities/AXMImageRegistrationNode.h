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

+ (BOOL)isSupported;
+ (id)title;

- (void).cxx_destruct;
- (void)_recordTransposition:(struct CGPoint { double x0; double x1; })a0;
- (void)_resetImageRegistration;
- (void)_resetTranspositionHistory;
- (id)_translationalImageRegistrationRequestForInput:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
