@class NSString;

@interface HKSPProvenanceInfo : NSObject

@property (class, readonly, copy, nonatomic) HKSPProvenanceInfo *unknownProvenance;

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *presentation;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSource:(id)a0 presentation:(id)a1;
- (BOOL)isEqualToProvenanceInfo:(id)a0;

@end
