@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *displayname;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSString *teamIdentifier;

- (id)freeze;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
