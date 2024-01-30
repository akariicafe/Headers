@class PXRelatedDataSource;

@interface PXRelatedTilingLayoutInvalidationContext : PXTilingLayoutInvalidationContext

@property (retain, nonatomic) PXRelatedDataSource *fromDataSource;
@property (retain, nonatomic) PXRelatedDataSource *toDataSource;

- (void).cxx_destruct;

@end
