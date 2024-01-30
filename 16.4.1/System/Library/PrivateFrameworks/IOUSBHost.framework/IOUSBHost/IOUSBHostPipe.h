@class NSData, NSMutableSet;

@interface IOUSBHostPipe : IOUSBHostIOSource

@property (retain) NSData *originalDescriptorsCache;
@property (retain) NSData *currentDescriptorsCache;
@property (retain) NSMutableSet *invalidDescriptorCache;
@property BOOL streamsEnabled;
@property (readonly) const struct IOUSBHostIOSourceDescriptors { unsigned short x0; struct IOUSBEndpointDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned char x5; } x1; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; } x2; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; } x3; } *originalDescriptors;
@property (readonly) const struct IOUSBHostIOSourceDescriptors { unsigned short x0; struct IOUSBEndpointDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned char x5; } x1; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; } x2; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; } x3; } *descriptors;
@property (readonly) double idleTimeout;

- (BOOL)abortWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)sendIORequestWithData:(id)a0 bytesTransferred:(unsigned long long *)a1 completionTimeout:(double)a2 error:(id *)a3;
- (BOOL)abortWithOption:(unsigned long long)a0 error:(id *)a1;
- (BOOL)adjustPipeWithDescriptors:(const struct IOUSBHostIOSourceDescriptors { unsigned short x0; struct IOUSBEndpointDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned char x5; } x1; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; } x2; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; } x3; } *)a0 error:(id *)a1;
- (BOOL)clearStallWithError:(id *)a0;
- (id)copyStreamWithStreamID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)disableStreamsWithError:(id *)a0;
- (BOOL)enableStreamsWithError:(id *)a0;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 completionTimeout:(double)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 error:(id *)a2 completionHandler:(id /* block */)a3;
- (BOOL)enqueueControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1 completionHandler:(id /* block */)a2;
- (BOOL)enqueueIORequestWithData:(id)a0 completionTimeout:(double)a1 error:(id *)a2 completionHandler:(id /* block */)a3;
- (BOOL)enqueueIORequestWithData:(id)a0 frameList:(struct IOUSBHostIsochronousFrame { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a1 frameListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 error:(id *)a4 completionHandler:(id /* block */)a5;
- (BOOL)enqueueIORequestWithData:(id)a0 frameList:(struct IOUSBHostIsochronousFrame { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a1 frameListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 options:(unsigned int)a4 error:(id *)a5 completionHandler:(id /* block */)a6 version:(unsigned long long)a7;
- (BOOL)enqueueIORequestWithData:(id)a0 transactionList:(struct IOUSBHostIsochronousTransaction { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; } *)a1 transactionListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 options:(unsigned int)a4 error:(id *)a5 completionHandler:(id /* block */)a6;
- (id)initWithHostInterface:(id)a0 endpointAddress:(unsigned long long)a1 ioConnection:(unsigned int)a2 ioNotificationPortRef:(struct IONotificationPort { } *)a3 deviceAddress:(unsigned long long)a4;
- (const struct IOUSBHostIOSourceDescriptors { unsigned short x0; struct IOUSBEndpointDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; unsigned char x5; } x1; struct IOUSBSuperSpeedEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned short x4; } x2; struct IOUSBSuperSpeedPlusIsochronousEndpointCompanionDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; } x3; } *)ioSourceDescriptorsWithOption:(unsigned long long)a0;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 completionTimeout:(double)a3 error:(id *)a4;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)sendControlRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1;
- (BOOL)sendIORequestWithData:(id)a0 frameList:(struct IOUSBHostIsochronousFrame { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a1 frameListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 error:(id *)a4;
- (BOOL)sendIORequestWithData:(id)a0 frameList:(void *)a1 frameListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 options:(unsigned int)a4 error:(id *)a5 version:(unsigned long long)a6;
- (BOOL)sendIORequestWithData:(id)a0 transactionList:(struct IOUSBHostIsochronousTransaction { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; } *)a1 transactionListCount:(unsigned long long)a2 firstFrameNumber:(unsigned long long)a3 options:(unsigned int)a4 error:(id *)a5;
- (BOOL)setIdleTimeout:(double)a0 error:(id *)a1;

@end
