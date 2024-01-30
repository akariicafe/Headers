@class NSData, NSString, NSArray;

@interface HMFHardwareAddress : HMFObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long length;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *formattedString;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddressData:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddressString:(id)a0 length:(unsigned long long)a1;
- (BOOL)isEqualToAddress:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
