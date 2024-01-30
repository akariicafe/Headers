@class NSString, NSDate;

@interface CMOdometerSuitability : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL suitableForRunning;
@property (readonly, nonatomic) BOOL suitableForWalking;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 suitableForRunning:(BOOL)a1 suitableForWalking:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
