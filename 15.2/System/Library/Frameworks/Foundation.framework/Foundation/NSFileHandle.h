@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long offsetInFile;
@property (readonly, copy) NSData *availableData;

+ (void)initialize;
+ (id)fileHandleForUpdatingURL:(id)a0 error:(id *)a1;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleForWritingAtPath:(id)a0;
+ (id)fileHandleWithStandardOutput;
+ (id)fileHandleForReadingFromURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleWithNullDevice;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleForReadingAtPath:(id)a0;
+ (id)fileHandleForWritingToURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForReadingFromURL:(id)a0 error:(id *)a1;
+ (id)fileHandleForUpdatingAtPath:(id)a0;
+ (id)fileHandleForUpdatingURL:(id)a0 mode:(unsigned short)a1 error:(id *)a2;
+ (id)fileHandleForWritingToURL:(id)a0 error:(id *)a1;

- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)writeData:(id)a0;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (id /* block */)writeabilityHandler;
- (void)synchronizeFile;
- (id)initWithFileDescriptor:(int)a0 closeOnDealloc:(BOOL)a1;
- (int)fileDescriptor;
- (void)_closeOnDealloc;
- (void)seekToFileOffset:(unsigned long long)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id /* block */)readabilityHandler;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)initWithURL:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (BOOL)closeAndReturnError:(out id *)a0;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2 error:(id *)a3;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (void)closeFile;
- (unsigned long long)seekToEndOfFile;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (id)initWithPath:(id)a0 flags:(long long)a1 createMode:(long long)a2;
- (id)readDataOfLength:(unsigned long long)a0;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)readDataToEndOfFile;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)setReadabilityHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
