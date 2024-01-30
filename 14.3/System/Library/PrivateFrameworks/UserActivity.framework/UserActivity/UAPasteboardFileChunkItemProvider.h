@class NSUUID, NSString, NSFileHandle, NSNumber;

@interface UAPasteboardFileChunkItemProvider : NSObject <UAPasteboardItemProviding>

@property (retain) NSFileHandle *dataFile;
@property (retain) NSNumber *offsetInFile;
@property long long chunkSize;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)getDataWithCompletionBlock:(id /* block */)a0;
- (id)initWithType:(id)a0 fileHandle:(id)a1 offsetInFile:(id)a2 size:(long long)a3;

@end
