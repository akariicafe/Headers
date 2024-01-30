@class NSString, NSURL, NSError, NSData, NSNumber;

@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider>

@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSURL *dataFileURL;
@property (copy, nonatomic) NSURL *contentIDURL;
@property (retain, nonatomic) NSError *dataFileURLError;
@property (copy, nonatomic) NSString *contentIDURLAbsoluteString;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic, getter=isImage) BOOL image;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (readonly, nonatomic) NSNumber *dataSizeNumber;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentPresentationsForAttachments:(id)a0;
+ (void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)a0 withAttachmentPresentations:(id)a1 occurences:(id *)a2;
+ (void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)a0 withAttachmentPresentations:(id)a1 newPresentationProvider:(id /* block */)a2 leftoverPresentations:(id *)a3;
+ (id)presentationSelector;

- (void)clearCache;
- (void).cxx_destruct;
- (BOOL)getData:(id *)a0 mimeType:(id *)a1 error:(id *)a2;
- (BOOL)getPresentationData:(id *)a0 mimeType:(id *)a1 error:(id *)a2;
- (id)initWithData:(id)a0 contentID:(id)a1 mimeType:(id)a2 filename:(id)a3;
- (id)initWithNoteAttachmentObject:(id)a0;
- (void)updateContentIDURL;

@end
