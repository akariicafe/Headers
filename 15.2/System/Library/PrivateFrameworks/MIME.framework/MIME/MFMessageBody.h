@class MFMessage;

@interface MFMessageBody : NSObject {
    MFMessage *_message;
}

@property (readonly, nonatomic) BOOL isEncrypted;

- (id)message;
- (BOOL)isHTML;
- (void)setMessage:(id)a0;
- (BOOL)isRich;
- (id)rawData;
- (id)attachments;
- (void).cxx_destruct;
- (id)attachmentURLs;
- (id)textHtmlPart;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1;
- (id)htmlContent;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2 isComplete:(BOOL *)a3;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)a0 encrypted:(BOOL *)a1;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2;

@end
