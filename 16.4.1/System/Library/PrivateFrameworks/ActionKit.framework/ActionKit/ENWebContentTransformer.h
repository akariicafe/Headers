@class ENNote, NSString, NSArray, NSURL, ENXMLDTD, ENXMLSaxParser, ENMLWriter, ENWebArchive;

@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate>

@property (retain, nonatomic) ENXMLSaxParser *htmlParser;
@property (retain, nonatomic) ENMLWriter *enmlWriter;
@property (retain, nonatomic) ENXMLDTD *enmlDTD;
@property (retain, nonatomic) NSURL *archiveBaseURL;
@property (retain, nonatomic) ENWebArchive *webArchive;
@property (retain, nonatomic) ENNote *note;
@property (retain, nonatomic) NSArray *ignorableTags;
@property (retain, nonatomic) NSArray *ignorableAttributes;
@property (retain, nonatomic) NSArray *skipTags;
@property (retain, nonatomic) NSArray *inlineElements;
@property (nonatomic) unsigned long long ignoreElementCount;
@property (nonatomic) BOOL inTitleElement;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndElement:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 attributes:(id)a2;
- (id)filenameFromURL:(id)a0;
- (void)parser:(id)a0 didFailWithError:(id)a1;
- (id)archiveBaseURLFromURL:(id)a0;
- (id)htmlFromWebArchive:(id)a0;
- (id)mimeTypeFromFilename:(id)a0;
- (id)resourceFromWebResource:(id)a0;
- (id)sanitizeURLAttribute:(id)a0;

@end
