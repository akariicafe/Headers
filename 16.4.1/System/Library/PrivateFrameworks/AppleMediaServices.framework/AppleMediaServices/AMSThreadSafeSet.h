@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeSet : NSObject

@property (retain, nonatomic) AMSThreadSafeObject *backingSet;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;

- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
