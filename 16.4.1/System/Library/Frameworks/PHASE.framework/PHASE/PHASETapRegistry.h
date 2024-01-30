@class PHASEEngine, NSMutableSet;

@interface PHASETapRegistry : NSObject {
    PHASEEngine *_weakEngine;
    NSMutableSet *_descriptions;
}

+ (id)new;

- (id)initWithEngine:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)tapReceiverFormatForIdentifier:(id)a0;
- (BOOL)registerTapReceiverForDescription:(id)a0 block:(id /* block */)a1;
- (BOOL)registerTapReceiverWithIdentifier:(id)a0 block:(id /* block */)a1;
- (id)tapReceiverFormatForDescription:(id)a0;
- (void)unregisterTapReceiverForDescription:(id)a0;
- (void)unregisterTapReceiverWithIdentifier:(id)a0;

@end
