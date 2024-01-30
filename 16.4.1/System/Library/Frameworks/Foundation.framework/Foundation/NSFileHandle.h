@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long offsetInFile;
@property (readonly, copy) NSData *availableData;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)fileHandleForWritingAtPath:(id)a0;
+ (id)fileHandleForUpdatingURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForReadingAtPath:(id)a0;
+ (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForReadingFromURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForUpdatingAtPath:(id)a0;
+ (id)fileHandleForUpdatingURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForWritingToURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForWritingToURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;

- (void)writeData:(id)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)synchronizeFile;
- (id)initWithURL:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (unsigned long long)seekToEndOfFile;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (int)fileDescriptor;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (void)setReadabilityHandler:(id /* block */)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id /* block */)writeabilityHandler;
- (void)closeFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)initWithFileDescriptor:(int)a0 closeOnDealloc:(BOOL)a1;
- (void)_closeOnDealloc;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (id)readDataToEndOfFile;
- (id /* block */)readabilityHandler;

@end
