@class NSSet;

@interface LNValueType : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (id)metadataClassesForCoding;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
