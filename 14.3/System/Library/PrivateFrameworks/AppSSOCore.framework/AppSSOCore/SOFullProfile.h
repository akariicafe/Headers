@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile

@property (retain, nonatomic) NSString *extensionTeamIdentifier;
@property (retain, nonatomic) NSDictionary *extensionData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProfileData:(id)a0;
- (id)description;
- (id)copyProfileForClient;
- (void)removeURLPrefix:(id)a0;
- (id)copyProfile;

@end
