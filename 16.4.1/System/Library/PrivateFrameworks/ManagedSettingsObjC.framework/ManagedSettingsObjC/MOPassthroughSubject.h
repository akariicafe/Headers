@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (void)subscribe:(id)a0;
- (void)disassociate:(id)a0;
- (void)sendValue:(id)a0;
- (void)sendCompletion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
