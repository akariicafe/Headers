@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *stackTrace;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) double lineNumber;
@property (nonatomic) int nodeId;

- (id)initWithType:(long long)a0;

@end
