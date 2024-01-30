@class NSArray, NSString;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *mediaPlayerOrderingTerms;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *searchProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
