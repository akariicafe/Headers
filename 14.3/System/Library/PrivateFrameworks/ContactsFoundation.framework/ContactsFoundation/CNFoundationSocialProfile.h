@class NSString;

@interface CNFoundationSocialProfile : NSObject <NSCopying>

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *userIdentifier;
@property (readonly, copy) NSString *service;
@property (readonly, copy) NSString *displayName;

+ (id)emptySocialProfile;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayName:(id)a4;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
