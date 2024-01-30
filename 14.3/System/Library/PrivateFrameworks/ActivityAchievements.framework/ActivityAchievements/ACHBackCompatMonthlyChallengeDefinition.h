@class NSString, NSExpression;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *typeString;
@property (readonly, nonatomic) NSExpression *goalExpression;

+ (id)definitionFromData:(id)a0;

- (void).cxx_destruct;
- (id)template;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)_monthlyChallengeTypeFromTypeString;
- (id)_dateComponentsFromIdentifier;
- (id)_goalExpressionValue;

@end
