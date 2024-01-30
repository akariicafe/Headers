@class NSString, WFFileType, NSURL, NSDate, NSData;

@interface WFFileRepresentation : WFRepresentation

@property (retain, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFFileType *wfType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) long long representationType;
@property (readonly, nonatomic) BOOL deletesFileOnDeallocation;
@property (readonly, nonatomic) BOOL securityScopedResource;
@property (readonly, nonatomic) BOOL isTemporaryFile;

+ (BOOL)supportsSecureCoding;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2;
+ (id)fileWithURL:(id)a0 options:(long long)a1;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1;
+ (void)addDisallowedDirectory:(id)a0;
+ (BOOL)coordinateFileOperation:(unsigned long long)a0 shouldCoordinate:(BOOL)a1 fileURL:(id)a2 destinationURL:(id)a3 accessor:(id /* block */)a4;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1 unsanitizedName:(id *)a2;
+ (id)typeOfFile:(id)a0;
+ (BOOL)sandboxAllowsRepresentingFileURL:(id)a0;
+ (BOOL)fileIsInDisallowedDirectory:(id)a0;
+ (id)typeOfData:(id)a0;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
+ (id)disallowedDirectoryURLs;
+ (BOOL)isAllowedToRepresentFileURL:(id)a0;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1 unsanitizedName:(id *)a2;

- (id)inputStream;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEncodable;
- (BOOL)writeToFileURL:(id)a0 overwriting:(BOOL)a1 error:(id *)a2;
- (id)mappedDataWithError:(id *)a0;
- (id)mappedData;
- (id)copyWithName:(id)a0 addingExtensionIfNecessary:(BOOL)a1 zone:(struct _NSZone { } *)a2;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)initWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
- (id)initWithFileURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
- (BOOL)writeToTemporaryFileURL:(id)a0 error:(id *)a1;
- (BOOL)writeToFileURL:(id)a0 copy:(BOOL)a1 overwrite:(BOOL)a2 error:(id *)a3;
- (id)typeForUserEnteredName:(id)a0 addingExtensionIfNecessary:(BOOL)a1;
- (id)updatedFilenameForUserEnteredName:(id)a0 addingExtensionIfNecessary:(BOOL)a1;

@end
