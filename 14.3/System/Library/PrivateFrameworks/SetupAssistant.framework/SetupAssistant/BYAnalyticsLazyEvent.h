@class NSString;

@interface BYAnalyticsLazyEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ payloadBlock;
@property (nonatomic) BOOL persist;

+ (id)eventWithName:(id)a0 withPayloadBlock:(id /* block */)a1 persist:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;

@end
