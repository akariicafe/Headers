@class NSArray, NSString, _WGConcreteDataSource;

@interface WGWidgetDataSource : NSObject <_WGDataSource, WGDataSource>

@property (retain, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _WGConcreteDataSource *concreteDataSource;
@property (readonly, nonatomic) NSArray *widgetIdentifiers;
@property (readonly, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, nonatomic) NSString *parentDataSourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)removeWidgetObserver:(id)a0 completion:(id /* block */)a1;
- (id)widgetDatumWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addWidgetObserver:(id)a0 completion:(id /* block */)a1;
- (void)replaceWithDatum:(id)a0;
- (void)removeDatumWithIdentifier:(id)a0;

@end
