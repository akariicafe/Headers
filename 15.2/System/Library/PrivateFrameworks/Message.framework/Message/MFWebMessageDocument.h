@class MFAttachmentManager, MFLock, NSMutableDictionary, NSURL, MFMimeBody, MFMimePart, NSData;

@interface MFWebMessageDocument : MFWebAttachmentSource {
    unsigned int _uniqueId;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
}

@property (getter=isVisuallyEmpty) BOOL visuallyEmpty;
@property (readonly) NSURL *baseURL;
@property (readonly) MFMimeBody *mimeBody;
@property (readonly) MFMimePart *mimePart;
@property (readonly) NSData *htmlData;
@property unsigned int preferredEncoding;
@property (retain, nonatomic) MFAttachmentManager *attachmentManager;

- (id)fileWrapper;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMimePart:(id)a0 htmlData:(id)a1 encoding:(unsigned int)a2;
- (id)initWithMimePart:(id)a0;
- (id)preferredCharacterSet;
- (id)attachmentForURL:(id)a0;
- (id)_initWithMimePart:(id)a0 htmlData:(id)a1;
- (id)mimePartForURL:(id)a0;
- (id)initWithMimeBody:(id)a0;
- (id)attachmentsInDocument;

@end
