@class NSData, NSArray, NSString;

@interface MSPPosition : NSObject <NSSecureCoding, NSCopying, MSPPositionSignpost>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly, getter=_pathComponents) NSArray *pathComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialPositionWithClientIdentifier:(id)a0;
+ (BOOL)_hasSpaceForInsertionAtDepth:(unsigned long long)a0 betweenEarlierPosition:(id)a1 andLaterPosition:(id)a2 clientIdentifier:(id)a3;
+ (id)positionBetweenPosition:(id)a0 andPosition:(id)a1 clientIdentifier:(id)a2;
+ (id)finalPositionWithClientIdentifier:(id)a0;
+ (BOOL)_randBoolForStrategy:(unsigned long long)a0;
+ (long long)_strategyForAllocationAtDepth:(unsigned long long)a0;
+ (id)positionBetweenSignpost:(id)a0 andSignpost:(id)a1 clientIdentifier:(id)a2;
+ (id)initialSignpostWithClientIdentifier:(id)a0;
+ (id)finalSignpostWithClientIdentifier:(id)a0;
+ (id)_pathComponentsForSignpost:(id)a0;

- (long long)compare:(id)a0;
- (BOOL)_isInitial;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_addingDistanceAtEqualDepth:(long long)a0 clientIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithIndexes:(id)a0 originIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithPathComponents:(id)a0;
- (BOOL)_isFinal;
- (id)_positionByTruncatingOrExtendingToDepth:(unsigned long long)a0 clientIdentifier:(id)a1;

@end
