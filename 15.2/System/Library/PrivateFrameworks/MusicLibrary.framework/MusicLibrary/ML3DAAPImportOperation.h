@class NSError;

@interface ML3DAAPImportOperation : ML3ImportOperation {
    void *_importSession;
    NSError *_importError;
    struct shared_ptr<DAAPParserDelegate> { struct DAAPParserDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    unsigned char _updateType;
    long long _totalTrackCount;
    long long _totalContainerCount;
    long long _processedTrackCount;
    long long _processedContainerCount;
    BOOL _importSessionStarted;
    int _sourceType;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)performImportOfSourceType:(int)a0 usingConnection:(id)a1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)updateImportProgress:(float)a0;
- (BOOL)_importDAAPPayloadFromFile:(id)a0 shouldProcessPlaylists:(BOOL)a1;
- (void)_finishParsingWithError:(id)a0;
- (BOOL)_processUpdateType:(unsigned char)a0;
- (BOOL)_processTrackItemCount:(int)a0;
- (BOOL)_processTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_processDeletedTrackId:(long long)a0;
- (BOOL)_processContainerItemCount:(int)a0;
- (BOOL)_processContainerElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a1 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x0; void *x1; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x0; } x2; })a2;
- (BOOL)_processDeletedContainerId:(long long)a0;
- (BOOL)_processPersonElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_startImportSessionIfNeeded;

@end
