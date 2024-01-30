@class NSString;

@interface WLKPlayHistoryRemoveRequest : WLKRequest {
    NSString *_channelID;
}

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *externalID;

- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (id)initWithBundleID:(id)a0 externalID:(id)a1;

@end
