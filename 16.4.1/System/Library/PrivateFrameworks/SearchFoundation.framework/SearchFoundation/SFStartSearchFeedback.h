@class NSString;

@interface SFStartSearchFeedback : SFFeedback

@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long searchType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 queryId:(unsigned long long)a2;

@end
