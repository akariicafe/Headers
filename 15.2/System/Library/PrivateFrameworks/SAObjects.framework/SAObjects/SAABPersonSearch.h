@class SAPhone, NSString, SAEmail, NSURL, NSDate, SALocation, NSNumber;

@interface SAABPersonSearch : SADomainCommand

@property (copy, nonatomic) NSURL *accountIdentifier;
@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSDate *birthday;
@property (copy, nonatomic) NSString *company;
@property (retain, nonatomic) SAEmail *email;
@property (copy, nonatomic) NSNumber *me;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAPhone *phone;
@property (copy, nonatomic) NSString *relationship;
@property (copy, nonatomic) NSString *scope;

+ (id)personSearch;
+ (id)personSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
