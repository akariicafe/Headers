@class NSString, TXRDefaultBuffer;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {
    void *_bytes;
    TXRDefaultBuffer *_buffer;
}

@property (readonly, nonatomic) void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForBuffer:(id)a0 withBytes:(void *)a1;

@end
