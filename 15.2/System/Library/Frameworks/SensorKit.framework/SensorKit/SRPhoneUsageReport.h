@class NSString, NSMutableSet;

@interface SRPhoneUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {
    long long _totalUniqueContacts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double startTime;
@property double duration;
@property long long totalOutgoingCalls;
@property long long totalIncomingCalls;
@property (retain) NSMutableSet *uniqueContacts;
@property double totalPhoneCallDuration;
@property (readonly) long long totalUniqueContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)usageReportWithInterval:(id)a0;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
