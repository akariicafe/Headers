@class NSString, NSDictionary, NSNumber;

@interface AFMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *originalCommandId;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSDictionary *eventInfo;
@property (retain, nonatomic) NSNumber *duration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (double)_roundDouble:(double)a0 toSignificantDigits:(unsigned long long)a1;
- (id)aceMetrics;
- (id)categoryString;
- (id)initWithOriginalCommandId:(id)a0 category:(long long)a1 duration:(id)a2;
- (id)initWithOriginalCommandId:(id)a0 category:(long long)a1 eventInfo:(id)a2 duration:(id)a3;

@end
