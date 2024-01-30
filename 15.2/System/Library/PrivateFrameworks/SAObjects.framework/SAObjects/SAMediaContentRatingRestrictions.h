@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long appRestriction;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long movieRestriction;
@property (nonatomic) long long tvRestriction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaContentRatingRestrictions;
+ (id)mediaContentRatingRestrictionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
