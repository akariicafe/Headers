@class NSString, NSFileHandle;

@interface SHFileReader : NSObject {
    NSFileHandle *fileHandle;
    unsigned long long currentOffset;
    unsigned long long totalFileLength;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *lineDelimiter;
@property (nonatomic) unsigned long long chunkSize;

- (id)readLine;
- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)readDataLine;
- (void)enumerateDataLinesUsingBlock:(id /* block */)a0;
- (void)enumerateJSONObjectsUsingBlock:(id /* block */)a0;

@end
