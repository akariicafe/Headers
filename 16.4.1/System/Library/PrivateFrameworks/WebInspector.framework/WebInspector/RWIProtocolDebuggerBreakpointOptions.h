@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *condition;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL autoContinue;
@property (nonatomic) int ignoreCount;

@end
