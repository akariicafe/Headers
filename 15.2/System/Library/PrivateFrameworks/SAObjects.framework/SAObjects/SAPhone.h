@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceComparable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *favoriteFacetime;
@property (copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property (copy, nonatomic) NSNumber *favoriteVoice;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSNumber *pseudo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phone;
+ (id)phoneWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
