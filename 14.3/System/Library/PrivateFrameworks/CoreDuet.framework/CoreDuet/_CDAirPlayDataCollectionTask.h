@class NSString, NSMutableDictionary, _CDAirPlayDataCollectionSession, NSDate, NSObject, _CDDateQuantizer;
@protocol OS_xpc_object, _DKKnowledgeQuerying;

@interface _CDAirPlayDataCollectionTask : NSObject {
    BOOL _selectedForDataCollection;
    BOOL _deleteSessionOnCleanup;
    NSString *_dataDirectory;
    NSString *_sessionPath;
    NSDate *_collectionDate;
    NSMutableDictionary *_videoBundleIDLookup;
    _CDAirPlayDataCollectionSession *_session;
    _CDDateQuantizer *_dateQuantizer;
    double _samplingRate;
    unsigned long long _daysPerBatch;
    unsigned long long _maxBatches;
    unsigned long long _airPlayVideoEventCount;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> storage;
@property (copy, nonatomic) id /* block */ submissionBlock;

- (id)initWithStorage:(id)a0 activity:(id)a1 sessionPath:(id)a2 dataDirectory:(id)a3 collectionDate:(id)a4 samplingRate:(double)a5 daysPerBatch:(unsigned long long)a6 maxBatches:(unsigned long long)a7;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithStorage:(id)a0 activity:(id)a1;

@end
