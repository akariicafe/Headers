@class FTMutableBatchTranslationRequest, _LTTranslationParagraph, NSMutableDictionary, NSString, _LTBatchEventLog, NSLocale, NSURL;

@interface _LTBatchTranslationResponseHandler : NSObject <FTBatchTranslationResponseDelegate>

@property (retain, nonatomic) FTMutableBatchTranslationRequest *request;
@property (retain, nonatomic) NSLocale *toLocale;
@property (retain, nonatomic) _LTBatchEventLog *batchLog;
@property (retain, nonatomic) _LTTranslationParagraph *paragraph;
@property (retain, nonatomic) NSMutableDictionary *batchedParagraphs;
@property (nonatomic) long long taskHint;
@property (nonatomic) unsigned long long bufferSize;
@property (retain, nonatomic) NSLocale *sourceLocale;
@property (retain, nonatomic) NSLocale *targetLocale;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *clientHeader;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL hasFinalServerResponse;
@property (nonatomic) BOOL completionHandlerCalled;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
