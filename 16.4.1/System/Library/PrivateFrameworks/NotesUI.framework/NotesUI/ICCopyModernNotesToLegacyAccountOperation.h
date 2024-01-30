@class NSArray;
@protocol ICLegacyContext, ICLegacyFolder;

@interface ICCopyModernNotesToLegacyAccountOperation : NSOperation

@property (copy, nonatomic) NSArray *sourceNotes;
@property (retain, nonatomic) id<ICLegacyFolder> destinationFolder;
@property (retain, nonatomic) id<ICLegacyContext> legacyContext;
@property (copy, nonatomic) id /* block */ didCopyBlock;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)copyNote:(id)a0 toFolder:(id)a1;
- (id)dataForAttachment:(id)a0 outFilename:(id *)a1 outMimeType:(id *)a2;
- (id)ensureLegacyFolderIsValid:(id)a0;
- (id)htmlAttributesForAttachment:(id)a0 legacyContentID:(id)a1 tagName:(id *)a2;
- (id)initWithNotes:(id)a0 toFolder:(id)a1 legacyContext:(id)a2 didCopyBlock:(id /* block */)a3;

@end
