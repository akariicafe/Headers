@class NSArray, NSDictionary;

@interface WLKPlayActivityDecorateVODOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier;

+ (id)identifierForPlayActivityID:(id)a0 channelID:(id)a1 duration:(id)a2;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)processResponse;

@end
