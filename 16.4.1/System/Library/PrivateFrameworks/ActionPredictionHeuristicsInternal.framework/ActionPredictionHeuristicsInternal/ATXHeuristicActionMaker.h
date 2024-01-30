@class NSString, ATXActionCriteria;

@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionTypeName;
@property (retain, nonatomic) ATXActionCriteria *criteria;
@property (retain, nonatomic) NSString *heuristic;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)action;
- (void).cxx_destruct;
- (id)_makeAction;

@end
