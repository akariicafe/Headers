@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    NSString *_property;
    id _value;
    long long _comparisonType;
}

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) id value;
@property (nonatomic) long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithValue:(id)a0 forProperty:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithValue:(id)a0 forProperty:(id)a1;

- (id)_ML3PredicateForML3EntityProperty:(id)a0;
- (id)initWithProtobufferDecodableObject:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)protobufferEncodableObjectFromLibrary:(id)a0;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionOfValue:(id)a0 forProperty:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
