@class NSString, PHMemory;

@interface PHMemoryPropertySet : NSObject <PHMemoryPropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHMemory *memory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 memory:(id)a1 prefetched:(BOOL)a2;

@end
