@class NSString, NSDictionary, MGGroupIdentifier, MGClientService, NSArray;

@interface MGGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) MGClientService *service;
@property (readonly, nonatomic) MGGroupIdentifier *identifier;
@property (readonly, copy, nonatomic) NSArray *memberIdentifiers;

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForGroup:(id)a0;
+ (void)groupWithClientService:(id)a0 name:(id)a1 members:(id)a2 completion:(id /* block */)a3;
+ (void)groupWithConnectionProvider:(id)a0 name:(id)a1 members:(id)a2 completion:(id /* block */)a3;
+ (void)groupWithName:(id)a0 members:(id)a1 completion:(id /* block */)a2;
+ (id)predicateForGroupIdentifier:(id)a0;
+ (id)predicateForGroupsContainingGroup:(id)a0;
+ (id)predicateForType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)deleteWithCompletion:(id /* block */)a0;
- (void)deleteWithClientService:(id)a0 completion:(id /* block */)a1;
- (void)deleteWithConnectionProvider:(id)a0 completion:(id /* block */)a1;
- (void)forceSetClientService:(id)a0;
- (id)initWithClientService:(id)a0 type:(id)a1 identifier:(id)a2 name:(id)a3 memberIdentifiers:(id)a4;
- (id)initWithClientService:(id)a0 type:(id)a1 identifier:(id)a2 name:(id)a3 properties:(id)a4 memberIdentifiers:(id)a5;
- (id)initWithConnectionProvider:(id)a0 type:(id)a1 identifier:(id)a2 name:(id)a3 memberIdentifiers:(id)a4;
- (id)initWithConnectionProvider:(id)a0 type:(id)a1 identifier:(id)a2 name:(id)a3 properties:(id)a4 memberIdentifiers:(id)a5;
- (BOOL)isSameGroup:(id)a0;
- (void)membersWithCompletion:(id /* block */)a0;

@end
