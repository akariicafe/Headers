@class NSArray, NSString;

@interface MPMediaCompoundPredicate : MPMediaPredicate <MPPProtobufferCoding>

@property (readonly, copy, nonatomic) NSArray *predicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)a0;

- (id)_ML3PredicateForEntityTypeSelector:(SEL)a0;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)ML3PredicateForContainer;
- (void)encodeWithCoder:(id)a0;
- (id)ML3PredicateForTrack;
- (id)initWithPredicates:(id)a0;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
