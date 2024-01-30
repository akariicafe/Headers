@class NSString, _UIViewServiceFencingControlProxy;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {
    int _remotePID;
    _UIViewServiceFencingControlProxy *_fencingControlProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)proxyWrappingExportedObject:(id)a0 forCommunicationWithPID:(int)a1 exportedProtocol:(id)a2;

- (void)dealloc;
- (void)_objc_initiateDealloc;

@end
