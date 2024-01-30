@class NSString, GKPlayerInternal;

@interface GKConcernInternal : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerInternal *player;
@property (nonatomic) unsigned int concernID;
@property (copy, nonatomic) NSString *message;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
