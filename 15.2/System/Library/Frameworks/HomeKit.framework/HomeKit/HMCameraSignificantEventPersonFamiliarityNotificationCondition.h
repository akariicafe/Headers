@class NSPredicate, NSString, NSArray;

@interface HMCameraSignificantEventPersonFamiliarityNotificationCondition : NSObject <HMFObject, NSCopying>

@property (readonly) unsigned long long personFamiliarityOptions;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)initWithPredicate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonFamiliarityOptions:(unsigned long long)a0;

@end
