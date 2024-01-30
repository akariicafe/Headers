@class NSString;

@interface _UIBarInsertLayoutData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double preferredHeight;
@property (nonatomic, getter=isCollapsible) BOOL collapsible;
@property (nonatomic) BOOL prefersExpanded;
@property (readonly, nonatomic) double layoutMinimumHeight;
@property (readonly, nonatomic, getter=isVariableHeight) BOOL variableHeight;
@property (readonly, nonatomic) double assignedHeight;
@property (readonly, nonatomic) double collapsingHeight;
@property (nonatomic) long long priority;
@property (nonatomic) long long order;
@property (nonatomic) BOOL ignoredForCollapsingBehaviors;
@property (nonatomic) BOOL active;

+ (id)calculateRestingHeightsForLayouts:(id)a0;
+ (void)updateLayoutParameters:(id)a0 overflowLayout:(id)a1 forAvailableHeight:(double)a2;
+ (struct { double x0; double x1; double x2; })calculateLayoutHeights:(id)a0;

- (void)setFixedHeight:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
