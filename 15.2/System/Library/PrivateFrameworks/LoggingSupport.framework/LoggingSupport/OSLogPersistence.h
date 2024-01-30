@class NSDate, NSString, NSURL, NSCompoundPredicate, _OSLogCollectionReference, _OSLogIndex, NSDictionary, _OSLogVersioning;
@protocol OSLogPersistenceDelegate;

@interface OSLogPersistence : NSObject {
    _OSLogCollectionReference *_oslcr;
    _OSLogVersioning *_version;
    _OSLogIndex *_index;
}

@property (readonly, retain, nonatomic) NSDictionary *statistics;
@property (readonly, nonatomic) struct _os_timesync_db_s { } *timesync;
@property (copy, nonatomic) NSURL *logFile;
@property (copy, nonatomic) NSURL *logArchive;
@property (weak, nonatomic) id<OSLogPersistenceDelegate> delegate;
@property (copy, nonatomic) NSCompoundPredicate *predicate;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long archiveState;
@property (readonly, nonatomic) long long archiveVersion;
@property (readonly, copy, nonatomic) NSString *currentFile;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *sparseDataStart;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long decodeFailures;
@property (readonly, nonatomic) unsigned long long messagesFiltered;
@property (readonly, nonatomic) unsigned long long logMessageCount;
@property (nonatomic) BOOL verbose;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_openLocalPersistenceDir;
- (void)_openPath:(id)a0;
- (void)_openFiles;
- (BOOL)allowSensitive;
- (void)resetWorkingState;
- (BOOL)streamChunks:(id /* block */)a0 andEntries:(id /* block */)a1 flags:(unsigned int)a2;
- (void)enumerateFromStartDate:(id)a0 toEndDate:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateFromLastBootWithBlock:(id /* block */)a0;
- (void)fetchFromStartDate:(id)a0 toEndDate:(id)a1;

@end
