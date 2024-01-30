@class NSMutableArray;
@protocol NSObject;

@interface ASCDescriber : NSObject

@property (class, readonly) id nilObject;

@property (readonly, nonatomic) id<NSObject> object;
@property (readonly, nonatomic) NSMutableArray *properties;

- (id)initWithObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)addBool:(BOOL)a0 withName:(id)a1;
- (void)addDouble:(double)a0 withName:(id)a1;
- (void)addInt64:(long long)a0 withName:(id)a1;
- (void)addInteger:(long long)a0 withName:(id)a1;
- (void)addObject:(id)a0 withName:(id)a1;
- (void)addSensitiveObject:(id)a0 withName:(id)a1;
- (void)addUInt64:(unsigned long long)a0 withName:(id)a1;
- (void)addUnsignedInteger:(unsigned long long)a0 withName:(id)a1;
- (id)describeObject;
- (id)describeProperties;
- (id)finalizeDescription;

@end
