@class NSString, OISFUZipArchiveOutputStream;

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *entryName;
@property (readonly, nonatomic) OISFUZipArchiveOutputStream *outputStream;
@property (readonly, nonatomic) BOOL isCompressed;

- (void).cxx_destruct;
- (BOOL)setUp;
- (id)initWithEntryName:(id)a0 outputStream:(id)a1 isCompressed:(BOOL)a2;

@end
