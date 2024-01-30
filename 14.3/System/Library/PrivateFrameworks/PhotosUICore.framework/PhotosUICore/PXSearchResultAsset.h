@class NSString;

@interface PXSearchResultAsset : NSObject <PXNewSearchResult>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned long long assetCount;
@property (copy, nonatomic) NSString *assetUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
