@class NSString, NSArray;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *displayname;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForKey:(id)a0;
+ (id)localizedStringForService:(id)a0;
+ (id /* block */)Username;
+ (id)socialProfileWithDictionaryRepresentation:(id)a0;

- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4 teamIdentifier:(id)a5 bundleIdentifiers:(id)a6;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0 ignoreURLs:(BOOL)a1;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3;
- (id)dictionaryRepresentation;

@end
