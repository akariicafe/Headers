@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject

@property (readonly, nonatomic) long long storeItemID;
@property (readonly, nonatomic) NSDictionary *additionalTrackMetadata;

- (void).cxx_destruct;
- (id)storeItem;
- (id)initWithStoreItemID:(long long)a0 additionalTrackMetadata:(id)a1;

@end
