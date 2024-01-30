@class NSString, NSDate;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry> {
    unsigned long long _submissionDateMillisecondsSince1970;
}

@property (copy, nonatomic) NSString *envelopeIdentifier;
@property (copy, nonatomic) NSDate *envelopeSubmissionDate;
@property (nonatomic) int envelopeContentType;

- (id)stringRepresentation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)a0;

@end
