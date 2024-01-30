@class PHUserFeedback;

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;

+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)propertySetName;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 person:(id)a1 prefetched:(BOOL)a2;

@end
