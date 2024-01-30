@class PLOperator, NSArray, NSString;

@interface PLIOHIDOperatorComposition : NSObject

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient { } *eventSystemClient;
@property (retain) NSArray *serviceClients;
@property (retain) NSString *serviceName;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperator:(id)a0 forService:(id)a1 withBlock:(id /* block */)a2;
- (id)dictionaryForKey:(id)a0;
- (id)initWithOperator:(id)a0 forService:(id)a1;
- (double)doubleForKey:(id)a0;

@end
