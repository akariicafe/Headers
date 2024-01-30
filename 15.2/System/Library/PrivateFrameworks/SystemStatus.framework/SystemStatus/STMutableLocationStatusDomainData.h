@class STMutableActivityAttributionCatalog, NSArray, NSString;

@interface STMutableLocationStatusDomainData : STLocationStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableActivityAttributionCatalog *attributionCatalog;
@property (copy, nonatomic) NSArray *locationAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLocationAttributions:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (void)addLocationAttribution:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeLocationAttribution:(id)a0;
- (id)initWithAttributionCatalog:(id)a0;

@end
