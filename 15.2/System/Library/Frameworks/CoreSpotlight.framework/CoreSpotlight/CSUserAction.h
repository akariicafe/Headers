@class NSString, NSDictionary, NSSet, NSUUID, NSObject, NSArray;
@protocol OS_xpc_object;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;
@property (copy) NSString *itemIdentifier;
@property (copy) NSString *contentAction;
@property (retain) NSDictionary *userInfo;
@property (retain) NSSet *keywords;
@property unsigned long long eligibility;
@property (retain, nonatomic) NSUUID *uaIdentifier;
@property (copy, nonatomic) NSArray *madeInitiallyCurrentDates;
@property (copy, nonatomic) NSArray *madeCurrentDates;
@property (copy, nonatomic) NSArray *madeCurrentEndDates;
@property (copy, nonatomic) NSArray *sentToIndexerDates;
@property (nonatomic) double madeCurrentInterval;

+ (id)actionFromUserActivity:(id)a0 searchableItem:(id)a1;

- (id)initWithUserActivity:(id)a0 searchableItem:(id)a1;
- (void)encodeWithCSCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithXPCDict:(id)a0;
- (id)_propertiesDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)updateWithUserAction:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;

@end
