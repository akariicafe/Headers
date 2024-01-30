@class SKUIReportAConcernMetadata, NSDictionary;

@interface SKUIReportAConcernOperation : ISOperation

@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata;
@property (copy) NSDictionary *responseDictionary;

- (void)run;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)_httpBody;

@end
