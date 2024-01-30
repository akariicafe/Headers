@class NSArray, NSString, STMutableListData;

@interface STMutableActivityAttributionList : STActivityAttributionList <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy, nonatomic) STMutableListData *listData;
@property (copy, nonatomic) NSArray *attributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAttribution:(id)a0;
- (void)setAttributions:(id)a0;
- (void)removeAttribution:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (id)initWithListData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllOccurrencesOfAttribution:(id)a0;

@end
