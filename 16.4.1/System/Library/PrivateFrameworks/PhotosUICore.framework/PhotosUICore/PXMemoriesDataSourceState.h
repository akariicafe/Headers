@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly, nonatomic) NSDictionary *infosByMemory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMemories:(id)a0 infosByMemory:(id)a1;
- (id)stateUpdatedWithChange:(id)a0 outMemoriesChangeDetails:(out id *)a1;

@end
