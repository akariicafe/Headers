@class NSArray, NSError, NSString;
@protocol TBTile;

@interface TBRemoteFetchTileItem : NSObject <TBFetchResponseTileItem>

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) id<TBTile> tile;
@property (readonly, nonatomic) NSArray *networks;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTile:(id)a0 status:(unsigned long long)a1 etag:(id)a2 error:(id)a3;
- (id)initWithEmptyTileKey:(unsigned long long)a0 etag:(id)a1 error:(id)a2;

@end
