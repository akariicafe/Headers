@class NSString;

@interface RWIProtocolDebuggerCSPViolationPauseReason : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *directive;

- (id)initWithDirective:(id)a0;

@end
