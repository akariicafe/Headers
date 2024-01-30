@interface NSNullFileHandle : NSFileHandle

- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (id /* block */)writeabilityHandler;
- (void)synchronizeFile;
- (int)fileDescriptor;
- (id)availableData;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id /* block */)readabilityHandler;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)closeFile;
- (unsigned long long)seekToEndOfFile;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (unsigned long long)offsetInFile;
- (id)readDataToEndOfFile;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)setReadabilityHandler:(id /* block */)a0;

@end
