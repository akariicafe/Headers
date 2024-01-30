@interface ProjectAssetManagerRepair : NSObject

@property (nonatomic) unsigned long long numberOfBrokenEditItems;
@property (nonatomic) unsigned long long numberOfRepairedEditItems;
@property (nonatomic) unsigned long long numberOfUnrepairedEditItems;
@property (nonatomic) unsigned long long numberOfOfflineMovies;

- (id)description;

@end
