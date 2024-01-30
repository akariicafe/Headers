@class NSString;

@interface CLSRelation : NSObject

@property (readonly, nonatomic) Class fromEntity;
@property (readonly, nonatomic) NSString *fromKey;
@property (readonly, nonatomic) Class toEntity;
@property (readonly, nonatomic) NSString *toKey;
@property (readonly, nonatomic, getter=isFaultable) BOOL faultable;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFromEntity:(Class)a0 toEntity:(Class)a1 onFromKey:(id)a2 toKey:(id)a3 faultable:(BOOL)a4;
- (BOOL)isInverseOfRelation:(id)a0;
- (BOOL)isEquivalentToRelation:(id)a0;

@end
