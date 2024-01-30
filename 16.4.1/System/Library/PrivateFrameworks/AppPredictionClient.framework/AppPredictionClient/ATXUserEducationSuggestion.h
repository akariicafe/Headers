@class NSUUID;

@interface ATXUserEducationSuggestion : NSObject <ATXUserEducationSuggestion, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;

+ (long long)suggestionType;

- (id)initWithUUID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRandomUUID;

@end
