@class NSString, NSDate;

@interface AMSTreatment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *startDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndDate:(id)a0 identifier:(id)a1 startDate:(id)a2;
- (unsigned long long)hash;

@end
