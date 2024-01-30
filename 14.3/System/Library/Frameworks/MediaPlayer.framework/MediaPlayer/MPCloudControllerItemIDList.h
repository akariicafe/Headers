@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject

@property (retain, nonatomic) ICCloudItemIDList *cloudItemIDList;

+ (id)cloudItemIDListForPlaylist:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addCloudItemID:(unsigned long long)a0 idType:(long long)a1;
- (void)insertCloudItemID:(unsigned long long)a0 idType:(long long)a1 atIndex:(unsigned long long)a2;
- (id)ICCloudItemIDList;

@end
