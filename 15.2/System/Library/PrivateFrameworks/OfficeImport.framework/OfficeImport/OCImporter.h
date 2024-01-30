@class NSString, OITSUProgressContext, NSURL, NSData, OCDReader;

@interface OCImporter : OCMapper {
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    BOOL mTryAlternateReader;
}

@property (retain) OITSUProgressContext *progressContext;
@property (copy, nonatomic) NSString *lastPasswordAttempted;
@property (copy, nonatomic) id /* block */ officeDOMInspector;

+ (void)initialize;
+ (id)xmlPathExtensions;
+ (BOOL)URLIsXML:(id)a0;
+ (Class)xmlReaderClass;
+ (Class)binaryReaderClass;
+ (Class)readerClassForURL:(id)a0;

- (id)displayName;
- (id)url;
- (id)filename;
- (id)initWithURL:(id)a0;
- (BOOL)isXML;
- (id)initWithData:(id)a0;
- (BOOL)setPassphrase:(id)a0;
- (BOOL)start;
- (void)setURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)a0 errorMessage:(id *)a1 readError:(BOOL *)a2;
- (BOOL)tryAlternateReader;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)a0 errorMessage:(id *)a1;
- (void)finalizeWithDocumentState:(id)a0;
- (Class)readerClass;

@end
