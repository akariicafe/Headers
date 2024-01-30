@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber *_dsid;
    NSString *_flag;
    BOOL _enabled;
}

- (id)initWithFamilyMemberDSID:(id)a0 flag:(id)a1 enabled:(BOOL)a2;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
