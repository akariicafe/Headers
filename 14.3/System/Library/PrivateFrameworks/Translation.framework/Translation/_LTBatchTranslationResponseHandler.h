@class NSDate, NSString, NSURL, FTMutableBatchTranslationRequest, NSMutableDictionary, _LTTranslationParagraph, NSLocale, LTSchemaBatchTranslationEvent;

@interface _LTBatchTranslationResponseHandler : NSObject <FTBatchTranslationResponseDelegate>

@property (retain, nonatomic) FTMutableBatchTranslationRequest *request;
@property (retain, nonatomic) NSLocale *toLocale;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *metricEvent;
@property (retain, nonatomic) _LTTranslationParagraph *paragraph;
@property (retain, nonatomic) NSMutableDictionary *batchedParagraphs;
@property (nonatomic) long long taskHint;
@property (nonatomic) unsigned long long bufferSize;
@property (retain, nonatomic) NSLocale *sourceLocale;
@property (retain, nonatomic) NSLocale *targetLocale;
@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL hasFinalServerResponse;
@property (nonatomic) BOOL completionHandlerCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
