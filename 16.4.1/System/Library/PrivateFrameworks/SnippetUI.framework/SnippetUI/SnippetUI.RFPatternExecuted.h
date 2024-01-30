@class NSString;

@interface SnippetUI.RFPatternExecuted : VRXTurnBasedInstrumentationEvent {
    void /* unknown type, empty encoding */ patternId;
    void /* unknown type, empty encoding */ patternType;
    void /* unknown type, empty encoding */ responseMode;
    void /* unknown type, empty encoding */ instrumentationClient;
}

@property (nonatomic, readonly) NSString *patternId;
@property (nonatomic, readonly) NSString *patternType;
@property (nonatomic, readonly) NSString *responseMode;

- (id)init;
- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (id)initWithPatternId:(id)a0 patternType:(id)a1 responseMode:(id)a2;

@end
