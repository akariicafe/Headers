@class NSString, NSMutableArray;

@interface TXRAssetCatalogSet : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long interpretation;
@property (nonatomic) unsigned long long origin;
@property (readonly, nonatomic) BOOL cubemap;
@property (readonly) NSMutableArray *configs;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)exportAtLocation:(id)a0 error:(id *)a1;
- (BOOL)addConfig:(id)a0 error:(id *)a1;

@end
