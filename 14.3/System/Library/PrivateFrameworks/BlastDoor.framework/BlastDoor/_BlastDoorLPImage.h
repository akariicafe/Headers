@class _BlastDoorLPImageProperties, NSString, NSData, NSURL;

@interface _BlastDoorLPImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *MIMEType;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) _BlastDoorLPImageProperties *properties;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithImage:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)_shouldEncodeData;
- (id)_initWithImage:(id)a0 properties:(id)a1;
- (unsigned long long)_encodedSize;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
