@class NSSet;

@interface PPTopicMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short impressionCount;
@property (readonly, nonatomic) unsigned short occurrencesInSource;
@property (readonly, nonatomic) unsigned short algorithmResultPosition;
@property (readonly, nonatomic) unsigned short algorithmResultCount;
@property (readonly, nonatomic) BOOL exactMatchInSourceText;
@property (readonly, nonatomic) NSSet *featureNames;

- (void)encodeWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)description;
- (id)initWithImpressionCount:(unsigned short)a0 occurrencesInSource:(unsigned short)a1 algorithmResultPosition:(unsigned short)a2 algorithmResultCount:(unsigned short)a3 exactMatchInSourceText:(BOOL)a4;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTopicMetadata:(id)a0;
- (unsigned long long)hash;

@end
