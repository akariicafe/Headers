@class NSSet;

@interface PPSourceMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int dwellTimeSeconds;
@property (readonly, nonatomic) unsigned int lengthSeconds;
@property (readonly, nonatomic) unsigned int lengthCharacters;
@property (readonly, nonatomic) unsigned short donationCount;
@property (readonly, nonatomic) unsigned short contactHandleCount;
@property (readonly, nonatomic) unsigned char flags;
@property (readonly, nonatomic) NSSet *featureNames;

- (void)encodeWithCoder:(id)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDwellTimeSeconds:(unsigned int)a0 lengthSeconds:(unsigned int)a1 lengthCharacters:(unsigned int)a2 donationCount:(unsigned short)a3 contactHandleCount:(unsigned short)a4 flags:(unsigned char)a5;
- (BOOL)isEqualToSourceMetadata:(id)a0;
- (id)init;
- (id)description;
- (id)initWithFlags:(unsigned char)a0;

@end
