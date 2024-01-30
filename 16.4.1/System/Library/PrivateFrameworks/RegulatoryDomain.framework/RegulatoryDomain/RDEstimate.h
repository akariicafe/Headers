@class NSString, NSDate;

@interface RDEstimate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _priority;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSDate *timestamp;

+ (id)lastKnownEstimateSet;
+ (id)currentEstimateSet;
+ (id)lastKnownEstimates;
+ (id)currentEstimates;

- (void)encodeWithCoder:(id)a0;
- (id)dictionary;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)getPriority;
- (BOOL)priorityIsAtLeast:(unsigned int)a0;
- (id)description;
- (id)initWithCountryCode:(id)a0 priority:(unsigned int)a1 timestamp:(id)a2;
- (void).cxx_destruct;

@end
