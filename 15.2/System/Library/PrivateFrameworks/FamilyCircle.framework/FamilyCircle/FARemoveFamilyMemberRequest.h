@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest

@property (readonly, copy) NSNumber *memberDSID;

- (id)initWithFamilyMemberDSID:(id)a0;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
