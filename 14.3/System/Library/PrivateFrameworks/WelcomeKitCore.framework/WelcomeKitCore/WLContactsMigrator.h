@class NSString, CNContactStore;

@interface WLContactsMigrator : NSObject <WLDataclassMigrating> {
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;

- (id)init;
- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (BOOL)accountBased;
- (void)importRecordData:(id)a0 summary:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (id)_vcardDataWithoutCustomFieldsFromVcardData:(id)a0;

@end
