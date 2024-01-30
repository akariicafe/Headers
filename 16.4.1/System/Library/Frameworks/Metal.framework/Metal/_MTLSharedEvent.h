@class NSString;
@protocol MTLDevice;

@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEventSPI> {
    NSString *_label;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _labelLock;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long labelTraceID;
@property unsigned long long signaledValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)label;
- (void)setLabel:(id)a0;
- (id)initWithMachPort:(unsigned int)a0;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1;
- (unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs { unsigned int x0; unsigned short x1; unsigned short x2; unsigned long long x3; } *)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (id)initWithSharedEventHandle:(id)a0;
- (id)retainedLabel;

@end
