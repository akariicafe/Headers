@class NSString;

@interface WFHealthIssue : NSObject

@property (copy, nonatomic) NSString *issueShortTitle;
@property (copy, nonatomic) NSString *issueTitle;
@property (copy, nonatomic) NSString *issueDescription;
@property (copy, nonatomic) NSString *issueRecommendation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long category;
@property (nonatomic) BOOL chinaDevice;
@property (readonly, nonatomic) NSString *issueDetailText;
@property (nonatomic) BOOL overrideIssue;

+ (id)issueWithType:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0;
- (id)description;
- (id)descriptionForType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)categoryForType:(unsigned long long)a0;
- (id)titleForType:(unsigned long long)a0;
- (id)shortTitleForType:(unsigned long long)a0;
- (id)recommendationForType:(unsigned long long)a0;
- (BOOL)isEqualToHealthIssue:(id)a0;

@end
