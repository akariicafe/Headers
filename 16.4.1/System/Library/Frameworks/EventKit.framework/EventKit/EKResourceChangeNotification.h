@class NSSet, NSDate;

@interface EKResourceChangeNotification : EKNotification

@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSSet *resourceChanges;

+ (Class)frozenClass;
+ (id)knownRelationshipMultiValueKeys;

- (void)addResourceChange:(id)a0;
- (void)removeResourceChange:(id)a0;

@end
