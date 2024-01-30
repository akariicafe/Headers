@class NSLocale;

@interface _LTLocalePair : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSLocale *sourceLocale;
@property (readonly, nonatomic) NSLocale *targetLocale;

+ (id)pairWithIdentifiers:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cannonicalIdentifier;
- (BOOL)isPassthrough;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)cannonicalLocalePair;
- (id)oppositeToLocale:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)reversedPair;
- (id)combinedLocaleIdentifier;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;

@end
