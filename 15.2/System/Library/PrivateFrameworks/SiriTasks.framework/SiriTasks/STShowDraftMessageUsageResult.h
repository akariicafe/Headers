@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult

@property (nonatomic) long long resultCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_resultDescription;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
