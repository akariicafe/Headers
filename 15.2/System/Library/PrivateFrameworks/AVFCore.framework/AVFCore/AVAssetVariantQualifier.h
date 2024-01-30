@class NSPredicate, AVAssetVariant;

@interface AVAssetVariantQualifier : NSObject <NSSecureCoding, NSCopying> {
    NSPredicate *_predicate;
    AVAssetVariant *_variant;
    long long _environmentalConditions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long environmentalConditions;

+ (id)assetVariantQualifierWithPredicate:(id)a0;
+ (id)assetVariantQualifierWithVariant:(id)a0;
+ (id)predicateForChannelCount:(long long)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;
+ (id)predicateForPresentationWidth:(double)a0 operatorType:(unsigned long long)a1;
+ (id)predicateForPresentationHeight:(double)a0 operatorType:(unsigned long long)a1;

- (id)_variant;
- (id)_predicate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_validatePredicate:(id)a0 error:(id *)a1;
- (id)initWithVariant:(id)a0 predicate:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
