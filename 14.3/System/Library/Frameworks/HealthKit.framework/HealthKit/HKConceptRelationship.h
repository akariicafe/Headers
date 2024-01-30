@class HKConcept, NSString;

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding> {
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConcept *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relationshipWithIdentifier:(long long)a0 type:(long long)a1 destination:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 type:(long long)a1 name:(id)a2 destination:(id)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
