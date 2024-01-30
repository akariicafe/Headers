@interface AAUploadBatchEventConfig : NSObject

@property (class, nonatomic, readonly) AAUploadBatchEventConfig *default;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxEventsPerSessionBatch;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxByteSizePerSessionBatch;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ debuggingEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ maxUploadTries;

- (id)withDebuggingEnabled:(BOOL)a0;
- (id)init;
- (id)withMaxByteSizePerSessionBatch:(long long)a0;
- (void).cxx_destruct;
- (id)withMaxEventsPerSessionBatch:(long long)a0;
- (id)initWithBatchSize:(long long)a0 enableDebugging:(BOOL)a1;
- (id)withMaxUploadTries:(long long)a0;

@end
