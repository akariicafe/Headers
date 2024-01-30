@class NSDate;

@interface TRIAllocationStatusCursor : NSObject <NSCopying, NSSecureCoding> {
    double _secondsFromEpoch;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSecondsFromEpoch:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
