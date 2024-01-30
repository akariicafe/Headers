@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter

@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)stringRepresentationWithRecordType:(id)a0;

@end
