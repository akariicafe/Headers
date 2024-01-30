@class NSString;
@protocol MTLHeap, MTLDevice;

@interface AGXA11FamilyBuffer : AGXBuffer <MTLBuffer>

@property (readonly) unsigned long long length;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newTextureWithDescriptor:(id)a0 offset:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2;
- (void)dealloc;
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
