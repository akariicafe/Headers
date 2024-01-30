@class ENGroupID, NSArray, NSData, NSSet, _ENGroupInfo;
@protocol ENCypher;

@interface ENGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _ENGroupInfo *groupInfo;
@property (retain, nonatomic) id<ENCypher> cypher;
@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSData *sharedApplicationData;
@property (readonly, nonatomic) NSSet *destinations;

+ (id)sortedGroupsFromGroups:(id)a0;

- (void).cxx_destruct;
- (id)verifyAndRevealData:(id)a0 sendingDevice:(id)a1 cypherIdentifier:(id)a2 error:(id *)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)accountIdentity;
- (void)encodeWithCoder:(id)a0;
- (id)initWithGroupInfo:(id)a0 groupID:(id)a1 cypher:(id)a2;
- (id)signAndConcealData:(id)a0 cypherIdentifier:(id *)a1 error:(id *)a2;

@end
