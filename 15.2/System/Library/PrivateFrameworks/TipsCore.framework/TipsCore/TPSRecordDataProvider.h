@protocol TPSRecordDataProviderDataSource;

@interface TPSRecordDataProvider : NSObject

@property (weak, nonatomic) id<TPSRecordDataProviderDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;

@end
