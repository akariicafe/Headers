@class NSArray, NSString, STMutableListData;

@interface STUIMutableDataAccessStatusDomainData : STUIDataAccessStatusDomainData <STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *attributionListData;
@property (copy, nonatomic) NSArray *dataAccessAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataAccessAttributions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttributionListData:(id)a0;

@end
