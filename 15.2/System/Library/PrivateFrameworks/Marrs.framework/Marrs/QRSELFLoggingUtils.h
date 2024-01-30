@interface QRSELFLoggingUtils : NSObject

+ (void)emitEvent:(id)a0;
+ (id)convertUUID:(id)a0;
+ (id)createEventMetadataWithNlId:(id)a0 andWithResultCandidateId:(id)a1;
+ (BOOL)emitRDStartedEventWithMetadata:(id)a0;
+ (BOOL)emitRDEvaluatedEventWithResponse:(struct QRResponse { struct Uuid { unsigned long long x0; unsigned long long x1; } x0; struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x1; int x2; double x3; double x4; double x5; int x6; })a0 andNLXMetadata:(id)a1;
+ (BOOL)emitRDFailedEventWithMetadata:(id)a0 andErrorCode:(long long)a1;
+ (BOOL)emitCCQRStartedEventWithMetadata:(id)a0;
+ (BOOL)emitCCQREvaluatedEventWithResponse:(struct QRResponse { struct Uuid { unsigned long long x0; unsigned long long x1; } x0; struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x1; int x2; double x3; double x4; double x5; int x6; })a0 andNLXMetadata:(id)a1;
+ (BOOL)emitCCQRFailedEventWithMetadata:(id)a0 andErrorCode:(long long)a1;
+ (int)convertRewriteType:(int)a0;
+ (id)createCCQRContextEventWrapper:(id)a0 withMetaData:(id)a1;
+ (int)convertRepetitionType:(int)a0;
+ (id)createRDContextEventWrapper:(id)a0 withMetaData:(id)a1;
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse { struct Uuid { unsigned long long x0; unsigned long long x1; } x0; struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x1; int x2; double x3; double x4; double x5; int x6; })a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse { struct Uuid { unsigned long long x0; unsigned long long x1; } x0; struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x1; int x2; double x3; double x4; double x5; int x6; })a0 withNLXMetadata:(id)a1 andLinkId:(id)a2;
+ (int)convertMarrsErrorCode:(long long)a0;
+ (id)createRDContextEvaluatedEvent:(struct QRResponse { struct Uuid { unsigned long long x0; unsigned long long x1; } x0; struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; struct QRHypothesis *x1; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis *x0; } x2; } x1; int x2; double x3; double x4; double x5; int x6; })a0 withNLXMetadata:(id)a1;

@end
