@class NSString, CBDisplayModuleiOS, NSMutableArray;

@interface CBABModuleiOS : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    void *_AABC;
    CBDisplayModuleiOS *_display;
    NSMutableArray *_alsServiceClients;
    NSMutableArray *_otherServiceClients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyIdentifiers;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)start;
- (BOOL)shouldMitigateHarmony:(struct __IOHIDServiceClient { } *)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)dealloc;
- (void)stop;

@end
