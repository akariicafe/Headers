@class NSArray, NSDictionary, NSPredicate, NSString, NSObject;
@protocol OS_os_log;

@interface EFQuery : NSObject <EFLoggable, NSSecureCoding, NSCopying>

@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class targetClass;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) long long limit;
@property (readonly, nonatomic) unsigned long long queryOptions;
@property (readonly, copy, nonatomic) NSDictionary *targetClassOptions;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isValidSortDescriptor:(id)a0 forTargetClass:(Class)a1;
+ (void)addValidSortDescriptorKeyPaths:(id)a0 forTargetClass:(Class)a1;

- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 queryOptions:(unsigned long long)a3 label:(id)a4;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToQuery:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 limit:(long long)a3 queryOptions:(unsigned long long)a4 targetClassOptions:(id)a5 label:(id)a6;
- (BOOL)isEqual:(id)a0;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 queryOptions:(unsigned long long)a3 targetClassOptions:(id)a4 label:(id)a5;
- (void).cxx_destruct;

@end
