@class NSArray, NSString, NSMutableArray;

@interface STListData : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding> {
    NSMutableArray *_objects;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_encodableObjectTypes;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithListData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithObjects:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;

@end
