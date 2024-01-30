@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject {
    int _handlerType;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_setDictionary;
    NSMutableDictionary *_getDictionary;
    NSMutableArray *_actions;
    BOOL _readOnly;
}

+ (id)brailleEvent;

- (void).cxx_destruct;
- (id)claimDictionary;
- (id)claimValueForKey:(int)a0;
- (int)handlerType;
- (id)initForHandlerType:(int)a0;
- (id)mainDictionary;
- (void)performWithHandler:(id)a0 trusted:(BOOL)a1;
- (void)requestPerformActionForKey:(int)a0;
- (void)requestRegisterCallbackForKey:(int)a0;
- (void)requestSetValue:(id)a0 forKey:(int)a1;
- (void)requestValueForKey:(int)a0;
- (void)setClaimDictionary:(id)a0;
- (void)setMainDictionary:(id)a0;

@end
