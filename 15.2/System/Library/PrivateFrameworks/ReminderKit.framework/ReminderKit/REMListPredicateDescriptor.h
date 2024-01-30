@class NSArray, REMObjectID;

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) REMObjectID *accountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) NSArray *objectIDs;

+ (id)predicateDescriptorForAllLists;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0;
- (unsigned long long)hash;

@end
