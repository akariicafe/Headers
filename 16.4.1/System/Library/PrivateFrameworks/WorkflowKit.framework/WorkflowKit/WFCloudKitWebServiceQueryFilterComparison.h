@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter

@property (retain, nonatomic) NSString *recordKey;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)stringRepresentationWithRecordType:(id)a0;

@end
