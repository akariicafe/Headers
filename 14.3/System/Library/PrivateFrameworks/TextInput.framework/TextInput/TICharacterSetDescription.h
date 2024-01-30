@class NSString, NSCharacterSet;

@interface TICharacterSetDescription : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSCharacterSet *_characterSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long baseIdentifier;
@property (copy, nonatomic) NSString *charactersAddedToBase;
@property (copy, nonatomic) NSString *charactersRemovedFromBase;
@property (readonly, nonatomic) BOOL inverted;
@property (readonly, nonatomic) NSCharacterSet *characterSet;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithBaseCharacterSet:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBase:(long long)a0 additionalCharacters:(id)a1 removedCharacters:(id)a2 inverted:(BOOL)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)newCharacterSetFromDescription;
- (id)invertedSetDescription;
- (void)clearCachedCharacterSet;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCharactersInString:(id)a0;

@end
