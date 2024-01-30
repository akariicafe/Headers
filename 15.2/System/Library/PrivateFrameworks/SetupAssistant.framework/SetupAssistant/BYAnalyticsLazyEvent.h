@class NSString;

@interface BYAnalyticsLazyEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ payloadBlock;
@property (nonatomic) BOOL persist;

+ (id)eventWithName:(id)a0 withPayloadBlock:(id /* block */)a1 persist:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;

@end
