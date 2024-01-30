@class NSArray, NSString, NSNumber;

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *criteriaFields;
@property (copy, nonatomic) NSString *criteriaSemanticTag;
@property (copy, nonatomic) NSString *criteriaSubType;
@property (copy, nonatomic) NSString *criteriaTimeType;
@property (copy, nonatomic) NSString *criteriaType;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *people;
@property (nonatomic) long long queryLimit;
@property (copy, nonatomic) NSNumber *queryTimeOut;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *socialLabelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)query;
+ (id)queryWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
