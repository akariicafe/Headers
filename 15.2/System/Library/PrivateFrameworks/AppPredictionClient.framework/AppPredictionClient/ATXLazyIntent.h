@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (id)_deserializeIntent;
- (BOOL)isDeserialized;
- (void)handleMemoryPressure;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (id)initWithIntentData:(id)a0;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
