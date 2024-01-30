@class NSNumber, NSURL, NSString;

@interface SAABAcePersonWrap : SAPerson <SASyncWrap>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *generation;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acePersonWrapWithDictionary:(id)a0 context:(id)a1;
+ (id)acePersonWrap;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
