@class NSNumber, ACAccount, NSString;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (copy, nonatomic) NSNumber *familyMemberDSID;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *serverCacheTag;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;

@end
