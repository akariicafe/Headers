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
@property (readonly, copy, nonatomic) NSString *typeString;
@property (nonatomic) BOOL overrideIssue;
@property (readonly, nonatomic) BOOL subtitleOnlyIssue;

+ (id /* block */)healthIssueSortComparator;
+ (id)issueWithType:(unsigned long long)a0;
+ (id)highestPriorityIssueFromIssues:(id)a0;

- (unsigned long long)_categoryForType:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)_typeStringForType:(unsigned long long)a0;
- (id)_shortTitleForType:(unsigned long long)a0;
- (id)_titleForType:(unsigned long long)a0;
- (id)_descriptionForType:(unsigned long long)a0;
- (id)_recommendationForType:(unsigned long long)a0;
- (BOOL)isEqualToHealthIssue:(id)a0;

@end
