@class MFMessage;

@interface MFMessageBody : NSObject {
    MFMessage *_message;
}

@property (readonly, nonatomic) BOOL isEncrypted;

- (id)rawData;
- (void)setMessage:(id)a0;
- (void).cxx_destruct;
- (id)attachments;
- (BOOL)isHTML;
- (BOOL)isRich;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2;
- (id)attachmentURLs;
- (id)message;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)a0 encrypted:(BOOL *)a1;
- (id)htmlContent;
- (id)textHtmlPart;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2 isComplete:(BOOL *)a3;

@end
