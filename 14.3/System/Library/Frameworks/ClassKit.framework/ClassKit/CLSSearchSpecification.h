@class NSArray, NSString;

@interface CLSSearchSpecification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL includeUnsearchablePersons;
@property (copy) NSArray *personSortDescriptors;
@property (readonly, copy) NSArray *personLocationIDs;
@property (readonly, copy) NSString *requiredRoleID;
@property (readonly) long long requiredRoleType;
@property (readonly, copy) NSString *requiredPrivilege;
@property (readonly, copy) NSArray *requiredPrivilegeLocationIDs;
@property (readonly, copy) NSString *prohibitedPrivilege;
@property (readonly, copy) NSArray *prohibitedPrivilegeLocationIDs;
@property (copy) NSArray *classSortDescriptors;
@property (readonly, copy) NSArray *classLocationIDs;
@property (copy) NSArray *locationSortDescriptors;
@property (readonly) long long requiredLocationRoleType;
@property (readonly, copy) NSArray *locationPersonIDs;
@property (readonly, copy) NSString *requiredLocationPrivilege;
@property (readonly, copy) NSArray *requiredLocationPersonIDs;
@property (readonly, copy) NSString *prohibitedLocationPrivilege;
@property (readonly, copy) NSArray *prohibitedLocationPersonIDs;
@property (readonly) unsigned long long requiredClassMemberRole;
@property (readonly, copy) NSArray *requiredClassMemberClassIDs;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long behaviors;
@property (copy) NSString *searchString;
@property (copy, nonatomic) NSArray *searchTokens;
@property (nonatomic) unsigned long long compareOptions;
@property (copy) NSArray *classSortDescriptors;
@property (copy, nonatomic) NSArray *classLocationIDs;
@property BOOL includeUnsearchablePersons;
@property (copy) NSArray *personSortDescriptors;
@property (copy) NSArray *personLocationIDs;
@property (copy) NSString *requiredRoleID;
@property long long requiredRoleType;
@property (copy) NSString *requiredPrivilege;
@property (copy) NSArray *requiredPrivilegeLocationIDs;
@property (copy) NSString *prohibitedPrivilege;
@property (copy) NSArray *prohibitedPrivilegeLocationIDs;
@property (copy) NSArray *locationSortDescriptors;
@property (copy) NSArray *locationPersonIDs;
@property long long requiredLocationRoleType;
@property (copy) NSString *requiredLocationPrivilege;
@property (copy) NSArray *requiredLocationPersonIDs;
@property (copy) NSString *prohibitedLocationPrivilege;
@property (copy) NSArray *prohibitedLocationPersonIDs;
@property (copy) NSArray *requiredClassMemberClassIDs;
@property unsigned long long requiredClassMemberRole;

+ (id)newlineAnchoredPredicateValueForToken:(id)a0;

- (id)predicateForClasses;
- (void)prohibitPrivilege:(id)a0 atLocationIDs:(id)a1;
- (id)predicateForPersonsWithPersonIDs:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isLocationSearch;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPersonSearch;
- (BOOL)canUsePersonPredicate;
- (BOOL)canUseClassPredicate;
- (BOOL)hasPersonConstraints;
- (BOOL)isClassSearch;
- (BOOL)isClassMemberSearch;
- (id)initWithCoder:(id)a0;
- (id)predicateForPersonsWithObjectIDs:(id)a0;
- (void)requireRoleType:(long long)a0 atLocationIDs:(id)a1;
- (void)requireRoleType:(long long)a0 onPersonIDs:(id)a1;
- (void)prohibitPrivilege:(id)a0 onPersonIDs:(id)a1;
- (void)requireClassMemberRole:(unsigned long long)a0 forClassIDs:(id)a1;
- (void)requirePrivilege:(id)a0 onPersonIDs:(id)a1;
- (id)dictionaryRepresentation;
- (void)restrictToClassesAtLocationIDs:(id)a0;
- (BOOL)requiresDashboardEntitlement;
- (BOOL)hasLocationConstraints;
- (id)predicateWithLocationIDs:(id)a0;
- (id)predicateUsingSubPredicateBlock:(id /* block */)a0;
- (void)requireRole:(id)a0 atLocationIDs:(id)a1;
- (id)initWithOptions:(unsigned long long)a0 behaviors:(unsigned long long)a1;
- (void)requirePrivilege:(id)a0 atLocationIDs:(id)a1;
- (id)predicateForPersons;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 behaviors:(unsigned long long)a1 searchString:(id)a2;

@end
