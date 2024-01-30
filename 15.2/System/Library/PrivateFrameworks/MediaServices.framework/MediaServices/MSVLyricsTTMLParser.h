@class NSData, NSError, NSString, MSVLyricsTextElement, NSMutableDictionary, NSInputStream, NSMutableArray, MSVLyricsSongInfo, NSObject;
@protocol OS_dispatch_queue;

@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate>

@property (retain, nonatomic) NSData *ttmlData;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) MSVLyricsSongInfo *lyricsInfo;
@property (retain, nonatomic) NSError *parserError;
@property (retain, nonatomic) NSMutableArray *elementStack;
@property (retain, nonatomic) NSMutableArray *lyricLines;
@property (retain, nonatomic) MSVLyricsTextElement *currentTextElement;
@property (retain, nonatomic) NSMutableDictionary *translationsMap;
@property (nonatomic) double currentStartTime;
@property (nonatomic) BOOL linesAreSortedByStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id)initWithTTMLData:(id)a0;
- (id)initWithTTMLStream:(id)a0;
- (id)parseWithError:(id *)a0;
- (void)parseWithCompletion:(id /* block */)a0;

@end
