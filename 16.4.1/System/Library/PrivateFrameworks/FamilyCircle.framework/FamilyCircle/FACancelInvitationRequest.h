@class NSString;

@interface FACancelInvitationRequest : FAFamilyCircleRequest {
    NSString *_email;
    NSString *_familyID;
}

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 familyID:(id)a1;

@end
