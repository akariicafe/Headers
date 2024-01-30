@class _CPUsageSinceLookback, NSString, NSDictionary, _CPUsageEnvelope, NSData, NSArray;

@interface _CPClientSession : PBCodable <_CPClientSession, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *agent;
@property (copy, nonatomic) NSString *userGuidString;
@property (copy, nonatomic) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) BOOL removeTimestamps;
@property (copy, nonatomic) NSString *parsecDeveloperID;
@property (nonatomic) BOOL duEnabled;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
@property (retain, nonatomic) _CPUsageEnvelope *cohortsFeedback;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (copy, nonatomic) NSArray *feedbacks;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void)clearFeedback;
- (void).cxx_destruct;
- (unsigned long long)feedbackCount;
- (id)feedbackAtIndex:(unsigned long long)a0;
- (void)setFeedback:(id)a0;
- (void)addFeedback:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (BOOL)getResourceVersions:(id *)a0 forKey:(id)a1;
- (void)setResourceVersions:(id)a0 forKey:(id)a1;

@end
