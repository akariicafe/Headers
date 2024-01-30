@class NSString, NSURL, MWFeedInfo, NSDictionary, NSMutableString, NSURLRequest, NSURLSessionDataTask, NSXMLParser, MWFeedItem, NSDateFormatter;
@protocol MWFeedParserDelegate;

@interface MWFeedParser : NSObject <NSXMLParserDelegate> {
    int feedType;
    NSDateFormatter *dateFormatterRFC822;
    NSDateFormatter *dateFormatterRFC3339;
    BOOL aborted;
    BOOL parsingComplete;
    BOOL hasEncounteredItems;
    BOOL parseStructureAsContent;
}

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSURLSessionDataTask *urlTask;
@property (retain, nonatomic) NSXMLParser *feedParser;
@property (retain, nonatomic) NSString *currentPath;
@property (retain, nonatomic) NSMutableString *currentText;
@property (retain, nonatomic) NSDictionary *currentElementAttributes;
@property (retain, nonatomic) MWFeedItem *item;
@property (retain, nonatomic) MWFeedInfo *info;
@property (copy, nonatomic) NSString *pathOfElementWithXHTMLType;
@property (weak, nonatomic) id<MWFeedParserDelegate> delegate;
@property (nonatomic) int feedParseType;
@property (readonly, nonatomic, getter=isStopped) BOOL stopped;
@property (readonly, nonatomic, getter=didFail) BOOL failed;
@property (readonly, nonatomic, getter=isParsing) BOOL parsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (BOOL)parse;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (id)init;
- (void)parser:(id)a0 foundCDATA:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)parserDidStartDocument:(id)a0;
- (void)parsingFinished;
- (void)abortParsingEarly;
- (BOOL)createEnclosureFromAttributes:(id)a0 andAddToItem:(id)a1;
- (void)dispatchFeedInfoToDelegate;
- (void)dispatchFeedItemToDelegate;
- (id)initWithFeedRequest:(id)a0;
- (id)initWithFeedURL:(id)a0;
- (void)parsingFailedWithErrorCode:(int)a0 andDescription:(id)a1;
- (BOOL)processAtomLink:(id)a0 andAddToMWObject:(id)a1;
- (void)startParsingData:(id)a0 textEncodingName:(id)a1;
- (void)stopParsing;

@end
