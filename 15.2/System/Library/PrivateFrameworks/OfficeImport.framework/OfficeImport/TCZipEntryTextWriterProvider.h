@class NSString, OISFUZipArchiveOutputStream;

@interface TCZipEntryTextWriterProvider : TCXmlTextWriterProvider

@property (readonly, copy, nonatomic) NSString *entryName;
@property (readonly, nonatomic) OISFUZipArchiveOutputStream *outputStream;
@property (readonly, nonatomic) BOOL isCompressed;

- (BOOL)setUp;
- (void).cxx_destruct;
- (id)initWithEntryName:(id)a0 outputStream:(id)a1 isCompressed:(BOOL)a2;

@end
