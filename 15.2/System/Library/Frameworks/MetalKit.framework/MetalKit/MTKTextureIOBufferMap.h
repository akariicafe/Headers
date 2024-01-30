@class NSString;

@interface MTKTextureIOBufferMap : NSObject <TXRBufferMap> {
    void *_bytes;
}

@property (readonly, nonatomic) void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContents:(void *)a0;

@end
