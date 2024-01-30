@class NSString, CMState, CMArchiveManager, OCDDocument, CMMapper;

@interface QLTop : NSObject <OCDReaderDelegate> {
    CMArchiveManager *_archiver;
    OCDDocument *_document;
    NSString *_fileName;
    unsigned long long _format;
}

@property (readonly) CMMapper *mapper;
@property (readonly) CMState *state;
@property BOOL forIndexing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchableAttributesForBinaryOfficeFileAtURL:(id)a0 error:(id *)a1;
+ (BOOL)supportsProgressiveMapping;
+ (void)fillHTMLArchiveForOfficeFile:(id)a0 dataFormat:(unsigned long long)a1 archiver:(id)a2;
+ (void)fillHTMLArchiveForOfficeData:(id)a0 fileName:(id)a1 dataFormat:(unsigned long long)a2 archiver:(id)a3;
+ (void)fillHTMLArchiveForOfficeFile:(id)a0 orData:(id)a1 dataFileName:(id)a2 dataFormat:(unsigned long long)a3 archiver:(id)a4;
+ (id)metadataForBinaryOfficeFileAtURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (Class)stateClass;
- (void)readerDidStartDocument:(id)a0 withElementCount:(long long)a1;
- (void)readerDidReadElement:(id)a0 atIndex:(unsigned long long)a1 inDocument:(id)a2 isLastElement:(BOOL)a3;
- (void)readerDidEndDocument:(id)a0;
- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)mapperClassForIndexing:(BOOL)a0;
- (void)readFile:(id)a0 orData:(id)a1 dataFileName:(id)a2 format:(unsigned long long)a3 archiver:(id)a4 forIndexing:(BOOL)a5;
- (id)documentWithFile:(id)a0 orData:(id)a1 isXML:(BOOL)a2 archiver:(id)a3;
- (void)setupMappingStateWithDocument:(id)a0;

@end
