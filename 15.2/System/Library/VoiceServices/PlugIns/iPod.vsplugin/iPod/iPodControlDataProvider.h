@class NSString, NSMutableDictionary, MPMediaLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface iPodControlDataProvider : NSObject <VSRecognitionModelDataProvider> {
    MPMediaLibrary *_library;
    NSMutableDictionary *_queriesByClassID;
    NSMutableDictionary *_collectionsByClassID;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    int _suppressionToken;
    int _stopSuppressionToken;
    struct { unsigned char observingChanges : 1; unsigned char suppressingChanges : 1; unsigned char pendingChanges : 1; } _providerFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_library;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)beginReportingChanges;
- (void)stopReportingChanges;
- (long long)valueCountForClassWithIdentifier:(id)a0 inModelWithIdentifier:(id)a1;
- (id)valueAtIndex:(long long)a0 forClassWithIdentifier:(id)a1 inModelWithIdentifier:(id)a2;
- (id)_queryForClassID:(id)a0;
- (id)_collectionsForClassID:(id)a0;
- (void)_libraryChanged:(id)a0;

@end
