@class NSString, NSDate;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *lastPromptDate;
@property (nonatomic) long long promptCount;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
