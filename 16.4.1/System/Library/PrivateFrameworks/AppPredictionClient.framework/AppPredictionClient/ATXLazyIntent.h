@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (id)initWithIntent:(id)a0;
- (id)_deserializeIntent;
- (void)handleMemoryPressure;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (BOOL)isDeserialized;
- (id)initWithIntentData:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
