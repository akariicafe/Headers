@class NSString;
@protocol MTLDevice;

@interface MTLToolsSharedEvent : MTLToolsEvent <MTLSharedEvent>

@property unsigned long long signaledValue;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (id)newSharedEventHandle;

@end
