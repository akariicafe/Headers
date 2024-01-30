@class NSArray, NSDictionary, NSString;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation {
    NSString *_compoundId;
}

@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier;

+ (id)identifierForPlayActivityID:(id)a0 channelID:(id)a1 duration:(id)a2;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithExternalId:(id)a0 brandId:(id)a1 hlsAssetDuration:(id)a2;

@end
