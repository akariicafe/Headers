@class NSDictionary;

@interface FFDefaultFileWriter : NSObject <FFFileWriter>

@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDictionary *dirAttributes;

- (BOOL)writeData:(id)a0 toFile:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;

@end
