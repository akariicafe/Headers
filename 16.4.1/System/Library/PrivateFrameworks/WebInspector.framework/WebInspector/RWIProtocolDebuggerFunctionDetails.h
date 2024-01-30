@class RWIProtocolDebuggerLocation, NSString, NSArray;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *scopeChain;

- (id)initWithLocation:(id)a0;

@end
