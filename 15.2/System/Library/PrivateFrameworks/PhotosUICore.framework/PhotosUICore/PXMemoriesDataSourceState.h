@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly, nonatomic) NSDictionary *infosByMemory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMemories:(id)a0 infosByMemory:(id)a1;
- (id)stateUpdatedWithChange:(id)a0 outMemoriesChangeDetails:(out id *)a1;

@end
