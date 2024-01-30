@class NSString, NSNumber, NSSet;

@interface CRKASMCourseUpdateProperties : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *color;
@property (retain, nonatomic) NSNumber *mascot;
@property (copy, nonatomic) NSSet *usersToAdd;
@property (copy, nonatomic) NSSet *usersToRemove;
@property (copy, nonatomic) NSSet *trustedUsersToAdd;
@property (copy, nonatomic) NSSet *trustedUsersToRemove;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)areFulfilledByCourse:(id)a0;

@end
