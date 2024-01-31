@class NSSet, NSUUID, NSString, CXHandle;

@interface CXAccount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy, nonatomic) NSSet *unarchivedObjectClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (readonly, copy, nonatomic) NSString *shortLabel;
@property (readonly, nonatomic) CXHandle *handle;
@property (readonly, copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *serviceName;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAccount:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 description:(id)a1 serviceName:(id)a2 isoCountryCode:(id)a3 handle:(id)a4;
- (id)initWithUUID:(id)a0 description:(id)a1 serviceName:(id)a2 isoCountryCode:(id)a3 handle:(id)a4 shortLabel:(id)a5;

@end
