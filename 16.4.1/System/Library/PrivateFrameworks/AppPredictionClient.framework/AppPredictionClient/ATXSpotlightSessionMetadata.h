@class NSString;

@interface ATXSpotlightSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char appConsumerSubType;
@property (nonatomic) unsigned char actionConsumerSubType;
@property (retain, nonatomic) NSString *engagedAppString;
@property (nonatomic) BOOL didSearchDuringSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAppConsumerSubType:(unsigned char)a0 actionConsumerSubType:(unsigned char)a1;
- (BOOL)isEqualToATXSpotlightSessionMetadata:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAppConsumerSubType:(unsigned char)a0 actionConsumerSubType:(unsigned char)a1 engagedAppString:(id)a2 didSearchDuringSession:(BOOL)a3;
- (id)init;
- (void).cxx_destruct;
- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;

@end
