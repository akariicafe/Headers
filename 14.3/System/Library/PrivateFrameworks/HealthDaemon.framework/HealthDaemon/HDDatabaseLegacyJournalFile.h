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

+ (id)_fileHandleForFileName:(id)a0 path:(id)a1 error:(id *)a2;
+ (unsigned int)_processJournalFile:(id)a0 profile:(id)a1 fileHandle:(id)a2 version:(unsigned int)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (id)_loadJournalEntry:(id)a0;
+ (unsigned int)_processJournalFile:(id)a0 profile:(id)a1 fileHandle:(id)a2 version:(unsigned int)a3 mapping:(void *)a4 length:(unsigned long long)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (unsigned int)_processOkemoJournalWithVersion:(unsigned int)a0 fileHandle:(id)a1 mapping:(void *)a2 size:(unsigned long long)a3 headerLength:(unsigned long long)a4 profile:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (unsigned int)_processMonarchJournalWithVersion:(unsigned int)a0 fileHandle:(id)a1 mapping:(void *)a2 size:(unsigned long long)a3 headerLength:(unsigned long long)a4 profile:(id)a5 error:(id *)a6 handler:(id /* block */)a7;
+ (BOOL)_loadJournalFromMapping:(void *)a0 size:(unsigned long long)a1 headerLength:(unsigned long long)a2 journalEntries:(id *)a3 error:(id *)a4;
+ (BOOL)_loadJournalWithFileHandle:(id)a0 journalEntries:(id *)a1 error:(id *)a2;

- (id)init;
- (id)_fullPath;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (BOOL)openForReadingWithError:(id *)a0;
- (unsigned int)readVersionWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;
- (BOOL)createAndOpenForWritingWithError:(id *)a0;
- (BOOL)canAppendData:(id)a0;
- (BOOL)appendData:(id)a0 entryClass:(Class)a1 error:(id *)a2;
- (BOOL)flushDataToDisk:(id *)a0;
- (unsigned int)enumerateEntriesWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;

@end
