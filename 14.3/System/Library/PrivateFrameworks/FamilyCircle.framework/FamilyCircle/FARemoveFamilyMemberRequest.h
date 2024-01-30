@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithFamilyMemberDSID:(id)a0;

@end
