@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

@property (nonatomic) long long resultCode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_resultDescription;
- (void)encodeWithCoder:(id)a0;

@end
