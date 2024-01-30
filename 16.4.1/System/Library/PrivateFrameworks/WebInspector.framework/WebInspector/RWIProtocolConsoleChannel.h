@interface RWIProtocolConsoleChannel : RWIProtocolJSONObject

@property (nonatomic) long long source;
@property (nonatomic) long long level;

- (id)initWithSource:(long long)a0 level:(long long)a1;

@end
