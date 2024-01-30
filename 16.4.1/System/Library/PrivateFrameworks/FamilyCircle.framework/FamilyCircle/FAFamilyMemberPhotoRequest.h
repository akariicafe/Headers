@class NSNumber, NSString, ACAccount;

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest

@property (copy, nonatomic) NSNumber *familyMemberDSID;
@property (copy, nonatomic) NSString *familyMemberAltDSID;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;
@property (copy, nonatomic) NSString *serverCacheTag;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithMemberAltDSID:(id)a0 accountStore:(id)a1;
- (id)initWithMemberDSID:(id)a0 accountStore:(id)a1;

@end
