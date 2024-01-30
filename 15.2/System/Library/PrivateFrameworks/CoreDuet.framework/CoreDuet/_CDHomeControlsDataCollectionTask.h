@class NSString, NSDate, NSObject, _CDHomeControlsDataCollectionSession;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDHomeControlsDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    id<_DKKnowledgeQuerying> _knowledgeStore;
    _CDHomeControlsDataCollectionSession *_session;
    double _samplingRate;
    unsigned long long _maxBatches;
    unsigned long long _daysPerBatch;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;

- (void)execute;
- (id)initWithStorage:(id)a0 activity:(id)a1;
- (void).cxx_destruct;

@end
