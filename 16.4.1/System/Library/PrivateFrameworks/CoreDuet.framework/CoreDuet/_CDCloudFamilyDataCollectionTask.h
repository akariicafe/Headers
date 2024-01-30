@class NSDate, NSString, HKHealthStore, NSMutableDictionary, _CDInteractionStore, CNContactStore, NSObject, _CDCloudFamilyDataCollectionSession;
@protocol OS_xpc_object;

@interface _CDCloudFamilyDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    _CDInteractionStore *_interactionStore;
    CNContactStore *_contactStore;
    HKHealthStore *_healthStore;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDCloudFamilyDataCollectionSession *_session;
    double _samplingRate;
    unsigned long long _maxBatches;
    unsigned long long _daysPerBatch;
    unsigned long long _airPlayVideoEventCount;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (copy, nonatomic) id /* block */ submissionBlock;

- (void)execute;
- (void).cxx_destruct;
- (id)eventDictsForContacts:(id)a0;
- (id)initWithActivity:(id)a0;

@end
