@interface GTFileChunk : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long fileOffset;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int dataOffset;
@property (nonatomic) unsigned int compressedLength;
@property (nonatomic) unsigned int fileIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
