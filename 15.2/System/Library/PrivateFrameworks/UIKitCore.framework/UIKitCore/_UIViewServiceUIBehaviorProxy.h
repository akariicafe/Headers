@class NSString, _UIViewServiceFencingControlProxy;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWrappingExportedObject:(id)a0 forCommunicationWithPID:(int)a1 exportedProtocol:(id)a2;

- (unsigned long long)retainCount;
- (id)retain;
- (int)__automatic_invalidation_logic;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
