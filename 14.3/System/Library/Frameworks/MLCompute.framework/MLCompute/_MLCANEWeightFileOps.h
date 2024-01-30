@class NSString, NSFileHandle;

@interface _MLCANEWeightFileOps : NSObject

@property (nonatomic) unsigned long long currentDataSizeInBytes;
@property (nonatomic) unsigned long long currentPaddingSizeInBytes;
@property (nonatomic) unsigned long long currentFileSizeInBytes;
@property (readonly, retain, nonatomic) NSString *filePath;
@property (readonly, retain, nonatomic) NSFileHandle *fileHandle;

+ (id)weightFileOpsAtPath:(id)a0;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (long long)writeData:(id)a0;
- (long long)writeTensor:(id)a0;

@end
