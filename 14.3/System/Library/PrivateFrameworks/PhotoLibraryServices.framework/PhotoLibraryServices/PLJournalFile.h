@class NSURL, PLJournal;

@interface PLJournalFile : NSObject

@property (weak, nonatomic) PLJournal *journal;
@property (readonly, nonatomic) NSURL *url;

+ (BOOL)writeData:(id)a0 toURL:(id)a1 atomically:(BOOL)a2 error:(id *)a3;
+ (BOOL)fileExistsAtURL:(id)a0;
+ (BOOL)copyURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)moveURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)createEmptyURL:(id)a0 error:(id *)a1;
+ (BOOL)removeURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (BOOL)fileExists;
- (id)initWithURL:(id)a0 journal:(id)a1;
- (BOOL)appendEntries:(id)a0 error:(id *)a1;
- (BOOL)openForReadingUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)enumerateEntriesUsingBlock:(id /* block */)a0 decodePayload:(BOOL)a1 error:(id *)a2;
- (BOOL)openForWritingUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)removeFileWithError:(id *)a0;
- (BOOL)createEmptyFileWithError:(id *)a0;
- (BOOL)moveToURL:(id)a0 error:(id *)a1;
- (BOOL)fileSize:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)allocatedFileSize:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)_fileSize:(unsigned long long *)a0 forKey:(id)a1 error:(id *)a2;

@end
