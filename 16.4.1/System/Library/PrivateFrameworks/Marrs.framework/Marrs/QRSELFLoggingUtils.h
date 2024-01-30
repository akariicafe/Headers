@interface QRSELFLoggingUtils : NSObject

+ (void)emitEvent:(id)a0;
+ (id)convertUUID:(id)a0;
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (BOOL)emitRDStartedEventWithMetadata:(id)a0;
+ (int)convertMarrsErrorCode:(long long)a0;
+ (int)convertRepetitionType:(int)a0;
+ (int)convertRewriteType:(int)a0;
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createCCQRContextEventWrapper:(id)a0 withMetaData:(id)a1;
+ (id)createEventMetadataWithNlId:(id)a0 andWithResultCandidateId:(id)a1 andWithRequester:(int)a2;
+ (id)createRDContextEvaluatedEvent:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 withNLXMetadata:(id)a1;
+ (id)createRDContextEventWrapper:(id)a0 withMetaData:(id)a1;
+ (BOOL)emitCCQREvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 andNLXMetadata:(id)a1;
+ (BOOL)emitCCQRFailedEventWithMetadata:(id)a0 andErrorCode:(long long)a1;
+ (BOOL)emitCCQRStartedEventWithMetadata:(id)a0;
+ (BOOL)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 andNLXMetadata:(id)a1 byPredictorType:(int)a2;
+ (BOOL)emitQueryRewriteFailedEventWithMetadata:(id)a0 andErrorCode:(long long)a1 byPredictorType:(int)a2;
+ (BOOL)emitQueryRewriteStartedEventWithMetadata:(id)a0 byPredictorType:(int)a1;
+ (BOOL)emitRDEvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x0; int x1; double x2; double x3; double x4; int x5; })a0 andNLXMetadata:(id)a1;
+ (BOOL)emitRDFailedEventWithMetadata:(id)a0 andErrorCode:(long long)a1;

@end
