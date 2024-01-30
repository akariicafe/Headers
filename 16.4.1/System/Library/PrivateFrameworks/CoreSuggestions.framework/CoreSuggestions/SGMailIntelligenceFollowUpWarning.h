@class NSString, NSNumber, NSDate;

@interface SGMailIntelligenceFollowUpWarning : SGMailIntelligenceWarning

@property (readonly, nonatomic) NSString *globalMessageId;
@property (readonly, nonatomic) NSString *appleMailMessageId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *startDateCore;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *endDateCore;
@property (retain, nonatomic) NSNumber *type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNSDictionary:(id)a0;
- (id)initWithNSData:(id)a0;
- (id)initWithAppleMailMessageId:(id)a0 snippet:(id)a1 core:(id)a2 score:(id)a3 startDate:(id)a4 startDateCore:(id)a5 endDate:(id)a6 endDateCore:(id)a7;
- (id)initWithAppleMailMessageId:(id)a0 snippet:(id)a1 core:(id)a2 signature:(id)a3 detectedLanguage:(id)a4 isIncomingMessage:(BOOL)a5 score:(id)a6 startDate:(id)a7 startDateCore:(id)a8 endDate:(id)a9 endDateCore:(id)a10;
- (id)toLightJson;
- (id)toLightNSData;
- (id)toLightNSDictionary;
- (unsigned char)warningType;

@end
