@class PLOperator, NSArray, NSString;

@interface PLIOHIDOperatorComposition : NSObject

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient { } *eventSystemClient;
@property (retain) NSArray *serviceClients;
@property (retain) NSString *serviceName;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (id)dictionaryForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperator:(id)a0 forService:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithOperator:(id)a0 forService:(id)a1;
- (void)dealloc;

@end
