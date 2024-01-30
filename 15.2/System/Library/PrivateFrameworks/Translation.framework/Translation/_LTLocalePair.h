@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)a0;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)reversedPair;
- (id)cannonicalLocalePair;
- (id)oppositeToLocale:(id)a0;
- (id)cannonicalIdentifier;
- (BOOL)isPassthrough;
- (id)combinedLocaleIdentifier;
- (BOOL)isVariantPair;

@end
