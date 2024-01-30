@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject>

@property (retain, nonatomic) NSMutableDictionary *eventListenersMap;

- (void).cxx_destruct;
- (void)addEventListener:(id)a0 :(id)a1 :(id)a2;
- (void)removeEventListener:(id)a0 :(id)a1;
- (id)_eventInformationForType:(id)a0 extraInfo:(id)a1;
- (BOOL)_searchEventListener:(id)a0 key:(id)a1 destroy:(BOOL)a2;
- (BOOL)invokeListeners:(id)a0 extraInfo:(id)a1;
- (BOOL)invokeMethod:(id)a0 withArguments:(id)a1 thenDispatchEvent:(id)a2 extraInfo:(id)a3;
- (BOOL)invokeSingleListener:(id)a0 extraInfo:(id)a1 return:(id *)a2;

@end
