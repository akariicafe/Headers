@class NSObject;
@protocol OS_dispatch_data;

@interface RESharedMemoryTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *data;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 descriptor:(id)a2;

@end
