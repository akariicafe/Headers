@class NSError, NSString, NSURL, ICEvernoteNote, ICEvernoteResource, NSMutableString, NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ICEvernoteNoteParser : NSObject <NSXMLParserDelegate>

@property (nonatomic) BOOL shouldCountOnly;
@property (nonatomic) BOOL shouldIgnoreCurrentNote;
@property (nonatomic) unsigned long long noteCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *parseSemaphore;
@property (retain, nonatomic) NSError *parseError;
@property (retain, nonatomic) NSMutableString *bufferString;
@property (nonatomic) long long contentLevel;
@property (retain, nonatomic) NSMutableString *contentString;
@property (retain, nonatomic) NSMutableArray *notes;
@property (retain, nonatomic) ICEvernoteNote *currentNote;
@property (retain, nonatomic) ICEvernoteResource *currentResource;
@property (readonly, nonatomic) NSURL *importDirectory;
@property (retain, nonatomic) NSURL *currentImportDirectory;
@property (retain, nonatomic) NSMutableDictionary *currentImportItem;
@property (retain, nonatomic) NSMutableArray *importItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)archiveEvernoteNote:(id)a0;
- (void)archiveEvernoteResource:(id)a0;
- (id)archiveItemsFromBookmarkData:(id)a0 error:(id *)a1;
- (void)cleanupArchiveId:(id)a0;
- (unsigned long long)countEvernoteNotesFromBookmarkData:(id)a0;
- (id)dateFromDateString:(id)a0;
- (id)importDirectoryURLWithImportIdentifier:(id)a0;
- (void)parseFileAtBookmarkData:(id)a0 shouldCountOnly:(BOOL)a1;
- (id)unarchiveEvernoteNoteFromArchiveId:(id)a0 noteArchiveId:(id)a1;
- (id)unarchiveEvernoteResourceFromArchiveId:(id)a0 resourceArchiveId:(id)a1;

@end
