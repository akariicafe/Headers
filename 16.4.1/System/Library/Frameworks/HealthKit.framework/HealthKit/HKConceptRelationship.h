@class HKConcept, NSString;

@interface HKConceptRelationship : NSObject <NSObject, NSCopying, NSSecureCoding> {
    HKConcept *_weakDestination;
    HKConcept *_destination;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConcept *destination;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 destination:(id)a1;
- (id)initWithType:(long long)a0 destination:(id)a1 version:(long long)a2 deleted:(BOOL)a3;
- (id)initWithType:(long long)a0 destination:(id)a1 weakDestination:(id)a2 version:(long long)a3 deleted:(BOOL)a4;
- (id)initWithType:(long long)a0 weakDestination:(id)a1 version:(long long)a2 deleted:(BOOL)a3;

@end
