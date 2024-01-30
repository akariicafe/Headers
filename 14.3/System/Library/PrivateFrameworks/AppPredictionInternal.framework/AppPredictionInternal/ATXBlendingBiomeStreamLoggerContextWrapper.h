@class BMStoreEvent, ATXBlendingBiomeStreamLoggerContext;

@interface ATXBlendingBiomeStreamLoggerContextWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BMStoreEvent *event;
@property (retain, nonatomic) ATXBlendingBiomeStreamLoggerContext *loggerContext;

- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEvent:(id)a0 loggerContext:(id)a1;
- (BOOL)isEqualToATXBlendingBiomeStreamLoggerContextWrapper:(id)a0;

@end
