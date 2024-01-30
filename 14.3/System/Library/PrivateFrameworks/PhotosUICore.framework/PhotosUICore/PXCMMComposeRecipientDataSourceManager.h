@class PXCMMPeopleSuggestionsDataSource, PXCMMPeopleSuggestionsDataSourceManager, NSDictionary, PXCMMComposeRecipientDataSource, NSString, NSMutableArray, NSMutableSet;
@protocol PXCMMComposeRecipientDataSourceManagerDelegate;

@interface PXCMMComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {
    NSMutableArray *_composeRecipients;
    NSMutableSet *_recipients;
}

@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSource *peopleSuggestionsDataSource;
@property (retain, nonatomic) PXCMMComposeRecipientDataSource *dataSource;
@property (nonatomic) unsigned long long numberOfPeopleSuggested;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (readonly, nonatomic) long long sourceType;
@property (weak, nonatomic) id<PXCMMComposeRecipientDataSourceManagerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithPeopleSuggestionsDataSourceManager:(id)a0 sourceType:(long long)a1;
- (id)_createComposeRecipientDataSourceFromCurrentState;
- (id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
- (long long)_lastValidComposeRecipientIndex;
- (void)_addComposeRecipients:(id)a0;
- (void)_replaceComposeRecipientAtIndex:(long long)a0 withComposeRecipient:(id)a1;
- (void)addRecipients:(id)a0;

@end
