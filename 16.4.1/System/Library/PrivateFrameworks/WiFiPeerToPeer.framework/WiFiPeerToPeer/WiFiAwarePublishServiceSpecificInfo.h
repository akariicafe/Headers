@class NSData, NSString;

@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *blob;
@property (copy, nonatomic) NSData *txtRecordData;
@property (copy, nonatomic) NSString *instanceName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)blobEquals:(id)a0;
- (BOOL)instanceNameEquals:(id)a0;
- (BOOL)txtRecordEquals:(id)a0;

@end
