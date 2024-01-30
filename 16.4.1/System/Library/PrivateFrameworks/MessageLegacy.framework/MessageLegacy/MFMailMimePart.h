@interface MFMailMimePart : MFMimePart

+ (Class)attachmentClass;
+ (BOOL)isRecognizedClassForContent:(id)a0;

- (id)htmlContent;
- (id)storeData:(id)a0 inMessage:(id)a1 isComplete:(BOOL)a2;
- (id)decodeTextPlain;
- (BOOL)_shouldContinueDecodingProcess;
- (void)configureFileWrapper:(id)a0;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 downloadIfNecessary:(BOOL)a2 asHTML:(BOOL)a3 isComplete:(BOOL *)a4;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextRichtext;
- (id)fileWrapperForDecodedObject:(id)a0 withFileData:(id *)a1;
- (id)fileWrapperForcingDownload:(BOOL)a0;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1;
- (id)htmlContentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 downloadIfNecessary:(BOOL)a2;

@end
