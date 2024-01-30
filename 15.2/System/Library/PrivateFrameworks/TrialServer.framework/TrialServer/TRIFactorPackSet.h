@class NSString, NSArray;
@protocol TRIFactorPackSetId;

@interface TRIFactorPackSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) NSArray *packs;

+ (id)setWithIdent:(id)a0 packs:(id)a1;
+ (id)artifactFromCKRecord:(id)a0;
+ (BOOL)_signatures:(id)a0 onItems:(id)a1 areValidUsingPublicCertificate:(id)a2;

- (id)copyWithReplacementIdent:(id)a0;
- (id)description;
- (BOOL)isEqualToSet:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdent:(id)a0 packs:(id)a1;
- (unsigned long long)hash;
- (id)copyWithReplacementPacks:(id)a0;
- (BOOL)isStructurallyValid;

@end
