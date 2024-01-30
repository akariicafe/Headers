@class MFMessage;

@interface MFMessageBody : NSObject {
    MFMessage *_message;
}

@property (readonly, nonatomic) BOOL isEncrypted;

- (id)attachments;
- (id)rawData;
- (void)setMessage:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (id)htmlContent;
- (id)attachmentURLs;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2 isComplete:(BOOL *)a3;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1;
- (BOOL)isHTML;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)a0 encrypted:(BOOL *)a1;
- (id)textHtmlPart;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2;
- (BOOL)isRich;

@end
