@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSString *_flag;
    BOOL _enabled;
}

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithFamilyMemberDSID:(id)a0 flag:(id)a1 enabled:(BOOL)a2;

@end
