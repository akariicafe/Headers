@class _OSLogEventSerializationMetadata, NSObject, NSPredicate, OSLogEventStream, NSMutableArray, OSLogEventSource;
@protocol OS_dispatch_queue;

@interface OSLogEventSerializer : NSObject

@property (readonly, nonatomic) OSLogEventSource *source;
@property (readonly, nonatomic) OSLogEventStream *stream;
@property (nonatomic) unsigned long long curBatchSize;
@property (readonly, nonatomic) NSMutableArray *curBatchDictionaries;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;
@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property (nonatomic) unsigned long long maxLogEventBatchSize;
@property (readonly, nonatomic) unsigned long long serializedEventCount;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 dataProcessingBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)serializeFromDate:(id)a0;
- (void)serializeFromLastBoot;
- (void)serializeFromPosition:(id)a0;
- (void)_serializeEvent:(id)a0;
- (BOOL)_isBatchCompleted;
- (id)_dictForPlaceholder:(id)a0;
- (id)_dictForArg:(id)a0;
- (id)_dictionaryForProxy:(id)a0;
- (id)_dictForDecomposedMessage:(id)a0 index:(unsigned long long)a1;
- (id)_arrayForDecomposedMessage:(id)a0;
- (id)_dictForDecomposedMessage:(id)a0;
- (void)_completeBatch:(id /* block */)a0;
- (void)invalidate;

@end
