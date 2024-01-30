@class NSArray, NSObject;
@protocol OS_xpc_object;

@interface REDrawableQueuePayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) NSArray *textureHandles;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *queueStateShmem;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithWidth:(unsigned int)a0 height:(unsigned int)a1 pixelFormat:(unsigned long long)a2 textureHandles:(id)a3 queueStateShmem:(void *)a4 queueStateLength:(unsigned long long)a5;

@end
