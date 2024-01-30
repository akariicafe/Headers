@interface NSNullFileHandle : NSFileHandle

- (id)readDataOfLength:(unsigned long long)a0;
- (int)fileDescriptor;
- (id /* block */)readabilityHandler;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (id)readDataToEndOfFile;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;
- (id)availableData;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (unsigned long long)seekToEndOfFile;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)synchronizeFile;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id /* block */)writeabilityHandler;
- (void)closeFile;
- (void)writeData:(id)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (unsigned long long)offsetInFile;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)seekToFileOffset:(unsigned long long)a0;

@end
