@class NSString;

@interface SASpeakablePhrase : SADomainObject

@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *pronunciation;

+ (id)speakablePhrase;
+ (id)speakablePhraseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
