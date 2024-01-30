@class NSSet, NSDictionary, NSData;

@interface TPPeerDynamicInfo : NSObject

@property (readonly, nonatomic) unsigned long long clock;
@property (readonly, nonatomic) NSSet *includedPeerIDs;
@property (readonly, nonatomic) NSSet *excludedPeerIDs;
@property (readonly, nonatomic) NSDictionary *dispositions;
@property (readonly, nonatomic) NSSet *preapprovals;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

+ (id)dynamicInfoWithClock:(unsigned long long)a0 includedPeerIDs:(id)a1 excludedPeerIDs:(id)a2 dispositions:(id)a3 preapprovals:(id)a4 signingKeyPair:(id)a5 error:(id *)a6;
+ (id)dynamicInfoPBWithClock:(unsigned long long)a0 includedPeerIDs:(id)a1 excludedPeerIDs:(id)a2 dispositions:(id)a3 preapprovals:(id)a4;
+ (id)dynamicInfoWithData:(id)a0 sig:(id)a1;

- (BOOL)isEqualToPeerDynamicInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithObj:(id)a0 data:(id)a1 sig:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)checkSignatureWithKey:(id)a0;
- (void).cxx_destruct;

@end
