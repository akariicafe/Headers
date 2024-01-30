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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)verifyAndRevealData:(id)a0 sendingDevice:(id)a1 cypherIdentifier:(id)a2 error:(id *)a3;
- (id)accountIdentity;
- (unsigned long long)hash;
- (id)initWithGroupInfo:(id)a0 groupID:(id)a1 cypher:(id)a2;
- (id)signAndConcealData:(id)a0 cypherIdentifier:(id *)a1 error:(id *)a2;

@end
