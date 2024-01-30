@class NSString, _TtC9SnippetUI17RFPatternExecuted;

@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent

@property (readonly) _TtC9SnippetUI17RFPatternExecuted *patternExecuted;
@property (retain, nonatomic) NSString *patternId;
@property (retain, nonatomic) NSString *patternType;
@property (retain, nonatomic) NSString *responseMode;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)a0;
- (id)init:(id)a0 patternType:(id)a1 responseMode:(id)a2;

@end
