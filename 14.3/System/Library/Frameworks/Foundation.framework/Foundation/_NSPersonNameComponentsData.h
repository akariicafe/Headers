@class NSString, NSPersonNameComponents;

@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *givenName;
@property (copy) NSString *familyName;
@property (copy) NSString *middleName;
@property (copy) NSString *namePrefix;
@property (copy) NSString *nameSuffix;
@property (copy) NSString *nickname;
@property (copy) NSPersonNameComponents *phoneticRepresentation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
