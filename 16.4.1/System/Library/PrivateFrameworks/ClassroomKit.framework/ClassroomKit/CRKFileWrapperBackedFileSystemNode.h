@class NSString, NSDictionary, NSData, NSFileWrapper;

@interface CRKFileWrapperBackedFileSystemNode : NSObject <CRKFileSystemNode>

@property (readonly, nonatomic) NSFileWrapper *parentFileWrapper;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper;
@property (copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSData *content;
@property (readonly, copy, nonatomic) NSDictionary *children;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithFileWrapper:(id)a0;
- (void)removeFromParent;
- (id)addChildWithDescriptor:(id)a0;
- (id)initWithFileWrapper:(id)a0 parentFileWrapper:(id)a1;

@end
