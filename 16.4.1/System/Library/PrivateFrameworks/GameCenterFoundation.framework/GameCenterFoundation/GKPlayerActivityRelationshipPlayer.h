@class GKPlayerInternal;

@interface GKPlayerActivityRelationshipPlayer : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) GKPlayerInternal *playerInternal;

+ (id)secureCodedPropertyKeys;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
