@class NSString;

@interface FAFetchFollowupRequest : FAFamilyCircleRequest {
    NSString *_altDSID;
}

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithAltDSID:(id)a0;

@end
