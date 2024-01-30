@class NSString;

@interface SFStartSearchFeedback : SFFeedback

@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *input;
@property (nonatomic) unsigned long long triggerEvent;
@property (nonatomic) unsigned long long searchType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1;
- (id)description;
- (id)initWithInput:(id)a0 triggerEvent:(unsigned long long)a1 queryId:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
