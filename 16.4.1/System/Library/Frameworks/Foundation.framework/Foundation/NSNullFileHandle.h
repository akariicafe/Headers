@interface NSNullFileHandle : NSFileHandle

- (void)writeData:(id)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)synchronizeFile;
- (unsigned long long)seekToEndOfFile;
- (unsigned long long)offsetInFile;
- (id)availableData;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (int)fileDescriptor;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id /* block */)writeabilityHandler;
- (void)closeFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)readDataToEndOfFile;
- (id /* block */)readabilityHandler;

@end
