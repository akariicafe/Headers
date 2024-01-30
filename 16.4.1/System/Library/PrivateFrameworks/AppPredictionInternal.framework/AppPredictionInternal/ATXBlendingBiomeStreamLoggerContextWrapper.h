@class BMStoreEvent, ATXBlendingBiomeStreamLoggerContext;

@interface ATXBlendingBiomeStreamLoggerContextWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BMStoreEvent *event;
@property (retain, nonatomic) ATXBlendingBiomeStreamLoggerContext *loggerContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 loggerContext:(id)a1;
- (BOOL)isEqualToATXBlendingBiomeStreamLoggerContextWrapper:(id)a0;

@end
