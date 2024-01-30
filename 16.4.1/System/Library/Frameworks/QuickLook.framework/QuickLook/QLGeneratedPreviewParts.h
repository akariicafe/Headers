@class NSString, NSDictionary, NSData, NSMutableDictionary;

@interface QLGeneratedPreviewParts : QLPreviewParts

@property (retain) NSData *data;
@property (retain) NSDictionary *attachments;
@property unsigned long long stringEncoding;
@property (retain) NSString *mimeType;
@property (retain) NSMutableDictionary *idToURL;

- (void).cxx_destruct;
- (void)computePreview:(id /* block */)a0;
- (id)URLRequestForContentID:(id)a0;
- (void)_processAttachment:(id)a0 withID:(id)a1;
- (void)_registerURL:(id)a0 forContentID:(id)a1;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 mimeType:(id)a2 attachments:(id)a3;
- (id)newAttachmentURLWithID:(id)a0 mimeType:(id)a1 encoding:(unsigned long long)a2;

@end
