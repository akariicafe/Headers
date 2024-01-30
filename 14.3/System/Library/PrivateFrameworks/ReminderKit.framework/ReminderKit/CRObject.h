@class NSUUID, NSDictionary, NSString;

@interface CRObject : NSObject <CRDataType, CREquatable, CRIdentifiable, CRCoding>

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) NSDictionary *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)CRProperties;
+ (id)keyFromSelector:(SEL)a0;
+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (id)init;
- (void)mergeWithObject:(id)a0;
- (void).cxx_destruct;
- (id)tombstone;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)setupConstraintsFor:(id)a0 in:(id)a1;
- (id)initWithIdentity:(id)a0 fields:(id)a1;
- (void)setFieldKey:(id)a0 value:(id)a1;
- (void)mergeWith:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;

@end
