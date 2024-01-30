@class NSString, NSMutableDictionary;

@interface CBCEModule : CBModule <CBContainerModuleProtocol> {
    NSMutableDictionary *_alsEvents;
    NSMutableDictionary *_currentInputDict;
    NSMutableDictionary *_currentOutputDict;
    id _model;
    id _overriddenInput;
    id _currentInput;
    BOOL _overriding;
}

@property Class modelClass;
@property Class modelInputClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)start;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (void)stop;
- (id)initWithQueue:(id)a0 ceModelID:(unsigned int)a1;
- (id)setModelInputWithXtalkArr:(id)a0 alsArr:(id)a1 alsRatioArr:(id)a2 X:(double)a3 Y:(double)a4 Z:(double)a5 CCT:(double)a6 u:(double)a7 v:(double)a8 lux:(double)a9 nits:(double)a10 iTime:(double)a11 gain:(double)a12 x:(double)a13 y:(double)a14 a:(double)a15 b:(double)a16 ceInput:(id)a17;
- (id)setModelInputWithAlsEvent:(id)a0 ceInput:(id)a1;
- (id)copyInference:(id)a0;

@end
