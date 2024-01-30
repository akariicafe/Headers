@class NSString;

@interface SRMessagesUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property double startTime;
@property double duration;
@property long long totalOutgoingMessages;
@property long long totalIncomingMessages;
@property long long totalUniqueContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usageReportWithInterval:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
