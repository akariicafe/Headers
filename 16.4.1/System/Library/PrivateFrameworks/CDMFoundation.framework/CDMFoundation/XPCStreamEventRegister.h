@class NSDictionary;

@interface XPCStreamEventRegister : NSObject

@property (readonly, nonatomic) NSDictionary *registrationsMap;

+ (id)defaultRegister;
+ (id)_registrationKeyFromStreamName:(id)a0 eventName:(id)a1;
+ (id)registerWithRegistrations:(id)a0;

- (void).cxx_destruct;
- (id)_initWithRegistrationsMap:(id)a0;
- (BOOL)handleXPCEvent:(id)a0 fromStream:(id)a1 currentConfig:(id)a2;
- (id)handleableXPCEventStreams;

@end
