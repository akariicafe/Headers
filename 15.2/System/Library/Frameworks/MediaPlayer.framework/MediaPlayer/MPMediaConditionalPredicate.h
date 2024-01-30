@class NSString, MPMediaPredicate;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding>

@property (readonly, copy, nonatomic) MPMediaPredicate *conditionPredicate;
@property (readonly, copy, nonatomic) MPMediaPredicate *thenPredicate;
@property (readonly, copy, nonatomic) MPMediaPredicate *elsePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

- (id)_ML3PredicateForEntityTypeSelector:(SEL)a0;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)ML3PredicateForContainer;
- (void)encodeWithCoder:(id)a0;
- (id)ML3PredicateForTrack;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithConditionPredicate:(id)a0 thenPredicate:(id)a1 elsePredicate:(id)a2;

@end
