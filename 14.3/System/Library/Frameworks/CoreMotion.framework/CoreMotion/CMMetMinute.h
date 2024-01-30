@class NSNumber, NSDate;

@interface CMMetMinute : NSObject <NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSNumber *fAverageIntensity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSNumber *averageIntensity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSample:(struct CLMetMinute { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithStartDate:(id)a0 averageIntensity:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
