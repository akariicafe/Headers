@class NSMutableDictionary, NSArray, NSMutableSet, IOUSBHostInterestNotificationReference, NSObject;
@protocol OS_dispatch_queue;

@interface IOUSBHostObject : NSObject

@property unsigned long long debugLoggingMask;
@property unsigned int ioService;
@property unsigned int ioConnection;
@property struct IONotificationPort { } *ioNotificationPortRef;
@property struct IONotificationPort { } *interestNotificationPortRef;
@property unsigned int interestNotificationObject;
@property (copy) id /* block */ interestHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *interestNotificationQueue;
@property (retain) NSMutableSet *invalidDescriptorCache;
@property (retain) NSMutableDictionary *descriptorCache;
@property (retain) NSArray *supportedStringLanguages;
@property (retain) IOUSBHostInterestNotificationReference *interestNotificationReference;
@property (readonly) unsigned long long deviceAddress;

- (void).cxx_destruct;
- (void)dealloc;
- (void)destroy;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 error:(id *)a2;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 index:(unsigned long long)a2 languageID:(unsigned long long)a3 error:(id *)a4;
- (id)initWithIOService:(unsigned int)a0 options:(unsigned long long)a1 queue:(id)a2 error:(id *)a3 interestHandler:(id /* block */)a4;
- (BOOL)openWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)closeWithOptions:(unsigned int)a0;
- (BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 completionTimeout:(double)a3 error:(id *)a4;
- (BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 completionTimeout:(double)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (BOOL)abortDeviceRequestsWithOption:(unsigned long long)a0 error:(id *)a1;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 index:(unsigned long long)a2 languageID:(unsigned long long)a3 requestType:(int)a4 requestRecipient:(int)a5 error:(id *)a6;
- (id)stringWithIndex:(unsigned long long)a0 languageID:(unsigned long long)a1 error:(id *)a2;
- (id)initWithIOService:(unsigned int)a0 queue:(id)a1 error:(id *)a2 interestHandler:(id /* block */)a3;
- (BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1;
- (BOOL)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1 completionHandler:(id /* block */)a2;
- (BOOL)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 error:(id *)a2 completionHandler:(id /* block */)a3;
- (BOOL)abortDeviceRequestsWithError:(id *)a0;
- (id)stringWithIndex:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)frameNumberWithTime:(unsigned long long *)a0;
- (id)ioDataWithCapacity:(unsigned long long)a0 error:(id *)a1;

@end
