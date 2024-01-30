@interface MFMailMimePart : MFMimePart

+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)a0;

- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 downloadIfNecessary:(BOOL)a2 asHTML:(BOOL)a3 isComplete:(BOOL *)a4;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 downloadIfNecessary:(BOOL)a2;
- (id)fileWrapperForcingDownload:(BOOL)a0;
- (id)fileWrapperForDecodedObject:(id)a0 withFileData:(id *)a1;
- (void)configureFileWrapper:(id)a0;
- (BOOL)_shouldContinueDecodingProcess;
- (id)decodeTextRichtext;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1;
- (id)htmlContent;
- (id)decodeTextPlain;
- (id)decodeTextCalendar;
- (id)decodeMultipartAppledouble;
- (id)storeData:(id)a0 inMessage:(id)a1 isComplete:(BOOL)a2;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageRfc822;
- (id)decodeMessagePartial;
- (id)decodeMessageExternal_body;

@end
