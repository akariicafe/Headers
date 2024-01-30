@class NSString, NSDictionary, NSNumber;

@interface AFMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *originalCommandId;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSDictionary *eventInfo;
@property (retain, nonatomic) NSNumber *duration;

- (void).cxx_destruct;
- (id)categoryString;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginalCommandId:(id)a0 category:(long long)a1 eventInfo:(id)a2 duration:(id)a3;
- (double)_roundDouble:(double)a0 toSignificantDigits:(unsigned long long)a1;
- (id)initWithOriginalCommandId:(id)a0 category:(long long)a1 duration:(id)a2;
- (id)description;
- (id)aceMetrics;
- (void)encodeWithCoder:(id)a0;

@end
