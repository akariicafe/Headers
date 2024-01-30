@class NSString, NSData, NSMutableSet, NSObject;
@protocol OS_os_log;

@interface EAEmailAddressSet : NSMutableSet <EFLoggable, NSSecureCoding>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *internalSet;
@property (readonly, nonatomic) NSData *serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)set;
+ (id)setWithCapacity:(unsigned long long)a0;

- (BOOL)isEqualToSet:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)intersectSet:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)setSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (unsigned long long)count;
- (id)initWithSerializedRepresentation:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)minusSet:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
