@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject

@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic) unsigned long long remaningFields;
@property (nonatomic) unsigned long long requestedFields;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
