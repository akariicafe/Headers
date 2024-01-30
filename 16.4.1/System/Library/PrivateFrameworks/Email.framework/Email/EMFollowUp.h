@class EFPair, NSString, NSDate;

@interface EMFollowUp : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EFPair *pair;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *jsonStringForModelEvaluationForSuggestions;
@property (readonly, nonatomic) BOOL isActive;

- (void)encodeWithCoder:(id)a0;
- (BOOL)containsDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 jsonStringForModelEvaluationForSuggestions:(id)a2;

@end
