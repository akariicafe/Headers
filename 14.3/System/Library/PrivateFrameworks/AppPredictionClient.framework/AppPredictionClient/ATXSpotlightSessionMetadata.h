@class NSString;

@interface ATXSpotlightSessionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char appConsumerSubType;
@property (nonatomic) unsigned char actionConsumerSubType;
@property (retain, nonatomic) NSString *engagedAppString;
@property (nonatomic) BOOL didSearchDuringSession;

- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)init;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAppConsumerSubType:(unsigned char)a0 actionConsumerSubType:(unsigned char)a1 engagedAppString:(id)a2 didSearchDuringSession:(BOOL)a3;
- (BOOL)isEqualToATXSpotlightSessionMetadata:(id)a0;
- (id)initWithAppConsumerSubType:(unsigned char)a0 actionConsumerSubType:(unsigned char)a1;

@end
