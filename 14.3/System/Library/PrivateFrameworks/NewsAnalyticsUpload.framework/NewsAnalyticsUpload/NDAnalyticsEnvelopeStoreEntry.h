@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {
    unsigned long long _submissionDateMillisecondsSince1970;
}

@property (copy, nonatomic) NSString *envelopeIdentifier;
@property (copy, nonatomic) NSDate *envelopeSubmissionDate;
@property (nonatomic) int envelopeContentType;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
