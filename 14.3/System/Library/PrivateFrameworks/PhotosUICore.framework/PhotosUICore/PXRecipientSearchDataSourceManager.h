@class PXRecipientSearchDataSource, NSString;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic) unsigned long long searchState;
@property (readonly, nonatomic) PXRecipientSearchDataSource *dataSource;
@property (copy, nonatomic) NSString *queryString;

- (void).cxx_destruct;
- (void)queryStringDidChange;

@end
