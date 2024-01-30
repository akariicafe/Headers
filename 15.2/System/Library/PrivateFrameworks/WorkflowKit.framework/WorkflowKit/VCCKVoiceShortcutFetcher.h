@class CKDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface VCCKVoiceShortcutFetcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, copy, nonatomic) id /* block */ recordHandler;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL completed;

- (void)start;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithRecordHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)fetchRecordZones;
- (void)fetchRecordsFromZone:(id)a0;

@end
