@class NSArray, REMObjectID;

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) NSArray *objectIDs;

+ (id)predicateDescriptorForAllLists;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
