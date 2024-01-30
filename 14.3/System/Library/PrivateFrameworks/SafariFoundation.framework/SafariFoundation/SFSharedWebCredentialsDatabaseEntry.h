@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic) long long service;
@property (readonly, nonatomic, getter=isApproved) BOOL approved;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithDomain:(id)a0 appID:(id)a1 service:(long long)a2 isApproved:(BOOL)a3;
- (id)initWithServiceDetails:(id)a0;

@end
