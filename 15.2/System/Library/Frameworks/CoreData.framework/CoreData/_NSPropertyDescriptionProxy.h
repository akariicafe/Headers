@class NSEntityDescription, NSPropertyDescription;

@interface _NSPropertyDescriptionProxy : NSObject <NSCoding, NSSecureCoding> {
    id _sourceBuffer;
    NSPropertyDescription *_underlyingProperty;
    NSEntityDescription *_entityDescription;
    unsigned int _entitysReferenceIDForProperty;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)entity;
- (void)_createCachesAndOptimizeState;
- (BOOL)isKindOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void)_setEntity:(id)a0;
- (void)_versionHash:(char *)a0 inStyle:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned int)_entitysReferenceID;
- (id)initWithCoder:(id)a0;
- (id)_underlyingProperty;
- (void)_setEntityAndMaintainIndices:(id)a0;
- (void)_setEntitysReferenceID:(unsigned int)a0;
- (id)initWithPropertyDescription:(id)a0;
- (Class)class;
- (unsigned long long)hash;

@end
