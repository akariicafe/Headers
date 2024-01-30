@interface FCUserEventHistoryPruningPolicy : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long value;

- (id)initWithType:(long long)a0 value:(unsigned long long)a1;
- (id)description;

@end
