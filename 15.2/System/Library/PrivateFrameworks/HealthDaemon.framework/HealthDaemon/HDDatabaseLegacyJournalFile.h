@class NSString, NSURL, NSFileHandle;

@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter> {
    NSURL *_URL;
    NSFileHandle *_fileHandle;
    unsigned int _version;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *journalPath;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) double modificationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)openForReadingWithError:(id *)a0;
- (void)dealloc;
- (unsigned int)readVersionWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;
- (BOOL)createAndOpenForWritingWithError:(id *)a0;
- (BOOL)canAppendData:(id)a0;
- (BOOL)appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (BOOL)flushDataToDisk:(id *)a0;
- (unsigned int)enumerateEntriesWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;

@end
