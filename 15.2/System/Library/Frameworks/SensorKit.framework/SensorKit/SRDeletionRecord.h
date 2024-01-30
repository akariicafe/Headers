@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding> {
    _Atomic long long _reason;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property double startTime;
@property double endTime;
@property long long reason;
@property long long extendedReason;
@property (copy) NSString *_originatingDeviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)tombstoneWithStartTime:(double)a0 endTime:(double)a1 reason:(long long)a2 originatingDeviceIdentifier:(id)a3;
+ (id)tombstoneWithStartTime:(double)a0 endTime:(double)a1 extendedReason:(long long)a2 originatingDeviceIdentifier:(id)a3;
+ (id)tombstoneWithStartTime:(double)a0 endTime:(double)a1 reason:(long long)a2;
+ (id)tombstoneWithStartTime:(double)a0 endTime:(double)a1 extendedReason:(long long)a2;

- (id)sr_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
