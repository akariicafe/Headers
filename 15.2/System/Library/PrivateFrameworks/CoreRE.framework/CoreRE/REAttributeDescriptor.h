@class NSString;

@interface REAttributeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int payloadOffset;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int stride;
@property (readonly, nonatomic) unsigned long long bufferSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 payloadOffset:(unsigned int)a1 count:(unsigned int)a2 stride:(unsigned int)a3;
- (id)initWithName:(id)a0 buffer:(void *)a1 elementSize:(unsigned long long)a2 payloadBuilder:(void *)a3;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 error:(id *)a1;

@end
