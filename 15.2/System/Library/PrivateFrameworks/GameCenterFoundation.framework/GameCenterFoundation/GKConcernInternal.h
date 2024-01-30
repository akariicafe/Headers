@class NSString, GKPlayerInternal;

@interface GKConcernInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) unsigned int concernID;
@property (copy, nonatomic) NSString *message;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
