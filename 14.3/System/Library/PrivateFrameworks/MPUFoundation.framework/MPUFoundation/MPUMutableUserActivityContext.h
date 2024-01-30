@class NSArray, NSMutableArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext {
    NSMutableArray *_containerItems;
}

@property (copy, nonatomic) NSArray *containerItems;
@property (nonatomic) long long originatorType;
@property (nonatomic) long long originatorVersion;

- (void).cxx_destruct;
- (void)setOriginatorType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOriginatorVersion:(long long)a0;
- (void)addContainerItem:(id)a0;
- (void)insertContainerItem:(id)a0 afterContainerItem:(id)a1;
- (void)removeContainerItem:(id)a0;

@end
