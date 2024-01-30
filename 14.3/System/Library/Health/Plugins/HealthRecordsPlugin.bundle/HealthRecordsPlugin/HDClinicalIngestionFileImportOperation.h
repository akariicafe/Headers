@class NSData, NSError;

@interface HDClinicalIngestionFileImportOperation : HDClinicalIngestionPerAccountOperation

@property (copy, nonatomic) NSData *documentData;
@property (copy, nonatomic) NSError *ingestionError;

- (void)_cancelWithError:(id)a0;
- (void).cxx_destruct;
- (void)main;

@end
