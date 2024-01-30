@class NSString, NSMutableData;

@interface VSMappedData : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) void *mmappedData;
@property (nonatomic) unsigned long long mappedLength;
@property (retain, nonatomic) NSMutableData *fallbackInMemoryData;
@property (nonatomic) BOOL shouldCleanFile;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })appendData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithFilePath:(id)a0 initialSize:(unsigned long long)a1;
- (void)_convertToFallbackMemory;
- (void)_appendToFallbackMemory:(id)a0;
- (void)_appendToMappedMemory:(id)a0;
- (void *)bytesAtOffset:(unsigned long long)a0;

@end
