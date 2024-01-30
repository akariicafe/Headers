@class NSString;

@interface _SFServiceIdentifier : NSObject <NSCopying, NSSecureCoding> {
    id _serviceIdentifierInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_lookupKey) NSString *lookupKey;
@property (readonly, copy, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) long long type;

+ (id)serviceIdentifierForDomain:(id)a0;
+ (id)serviceIdentifierForURL:(id)a0;
+ (id)serviceIdentifierForBundleID:(id)a0;
+ (id)serviceIdentifierForAccessGroup:(id)a0;
+ (id)serviceIdentifierForCustomString:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServiceID:(id)a0 forType:(long long)a1;

@end
