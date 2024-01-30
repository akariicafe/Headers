@interface DBEvent : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id context;

+ (id)eventWithType:(unsigned long long)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 context:(id)a1;

@end
