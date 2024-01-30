@class NSString, BMPruningPolicy;

@interface BMStreamMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *remoteStreamName;
@property (readonly, nonatomic) NSString *streamId;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) Class eventDataClass;
@property (readonly, nonatomic) BMPruningPolicy *pruningPolicy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqualStreamMetadata:(id)a0;
- (id)initWithStreamId:(id)a0 eventType:(Class)a1 remoteStreamName:(id)a2 pruningPolicy:(id)a3;
- (void).cxx_destruct;

@end
