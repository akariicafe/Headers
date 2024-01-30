@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {
    unsigned long long _vma;
    unsigned long long _capacity;
    unsigned long long _length;
    unsigned int _mp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long length;

+ (id)dataWithCapacity:(unsigned long long)a0;
+ (id)dataWithLength:(unsigned long long)a0;
+ (id)bufferWithLength:(unsigned long long)a0;
+ (id)bufferWithCapacity:(unsigned long long)a0;

- (const void *)bytes;
- (void *)mutableBytes;
- (id)initWithLength:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 andLength:(unsigned long long)a1;
- (BOOL)ensureMapped;
- (id)initWithMachPort:(unsigned int)a0 capacity:(unsigned long long)a1 andLength:(unsigned long long)a2;
- (void)detachBytes;
- (id)createDispatchData;

@end
