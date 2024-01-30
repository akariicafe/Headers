@class EFPathComponent;

@interface EFFileWrapper : NSFileWrapper

@property (retain, nonatomic) EFPathComponent *preferredFilenamePathComponent;
@property (retain, nonatomic) EFPathComponent *filenamePathComponent;

- (id)initWithSerializedRepresentation:(id)a0;
- (void)setFilename:(id)a0;
- (id)filename;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
