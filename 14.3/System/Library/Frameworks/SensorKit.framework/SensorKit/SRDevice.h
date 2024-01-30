@class NSString;

@interface SRDevice : NSObject <NSSecureCoding, NSCopying> {
    NSString *_internalProductType;
}

@property (class, readonly) SRDevice *currentDevice;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceIdentifier;
@property (copy) NSString *buildVersion;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *systemName;
@property (readonly, copy) NSString *systemVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_productType;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;
- (id)initWithDeviceDetails:(id)a0;

@end
