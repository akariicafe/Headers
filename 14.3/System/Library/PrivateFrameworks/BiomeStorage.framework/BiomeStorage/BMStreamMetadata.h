@interface BMStreamMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class eventDataClass;

- (id)initWithEventType:(Class)a0;
- (void)dealloc;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualStreamMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
