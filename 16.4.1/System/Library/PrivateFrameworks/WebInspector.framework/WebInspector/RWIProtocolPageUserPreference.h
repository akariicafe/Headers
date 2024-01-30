@interface RWIProtocolPageUserPreference : RWIProtocolJSONObject

@property (nonatomic) long long name;
@property (nonatomic) long long value;

- (id)initWithName:(long long)a0 value:(long long)a1;

@end
