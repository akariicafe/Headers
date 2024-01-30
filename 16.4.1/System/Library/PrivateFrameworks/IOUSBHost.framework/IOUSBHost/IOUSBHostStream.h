@class IOUSBHostPipe;

@interface IOUSBHostStream : IOUSBHostIOSource

@property (retain) IOUSBHostPipe *hostPipe;
@property unsigned long long streamID;

- (BOOL)abortWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)abortWithOption:(unsigned long long)a0 error:(id *)a1;
- (BOOL)enqueueIORequestWithData:(id)a0 error:(id *)a1 completionHandler:(id /* block */)a2;
- (id)initWithHostPipe:(id)a0 streamID:(unsigned long long)a1 ioConnection:(unsigned int)a2 ioNotificationPortRef:(struct IONotificationPort { } *)a3;
- (BOOL)sendIORequestWithData:(id)a0 bytesTransferred:(unsigned long long *)a1 error:(id *)a2;

@end
