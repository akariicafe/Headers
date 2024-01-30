@class NSString, NSArray;

@interface SGSocialProfileDetails : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSArray *uniqueIdentifiers;
@property (readonly, nonatomic) NSString *preferredUniqueIdentifier;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithSocialProfile:(id)a0;
- (id)initWithCNSocialProfile:(id)a0;
- (id)initWithSerialized:(id)a0;
- (id)initWithUsername:(id)a0 userIdentifier:(id)a1 bundleIdentifier:(id)a2 displayName:(id)a3 service:(id)a4 teamIdentifier:(id)a5;

@end
