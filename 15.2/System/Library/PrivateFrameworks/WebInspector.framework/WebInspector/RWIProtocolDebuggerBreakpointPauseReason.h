@class NSString;

@interface RWIProtocolDebuggerBreakpointPauseReason : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *breakpointId;

- (id)initWithBreakpointId:(id)a0;

@end
