@class NSString;

@interface CKVMutableDatasetInfo : CKVDatasetInfo

@property (copy, nonatomic) NSString *originAppId;
@property (nonatomic) long long itemType;
@property (nonatomic) unsigned int datasetId;
@property (nonatomic) unsigned long long lastModifiedTime;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned long long capturedTime;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
