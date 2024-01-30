@class NSArray, NSData, NSString;

@interface _SWPersonIdentityProof : SWPersonIdentityProof <_SWPersonIdentityProofProtocol>

@property (copy, nonatomic) NSArray *inclusionHashes;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long localKeyIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInclusionHashes:(id)a0;

@end
