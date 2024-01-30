@class NSDate;

@interface FUStepTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long type;
@property (retain) NSDate *date;
@property (readonly) double timeIntervalSinceNow;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 date:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
