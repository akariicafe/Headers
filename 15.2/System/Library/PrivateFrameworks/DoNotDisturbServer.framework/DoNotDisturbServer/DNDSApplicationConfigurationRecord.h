@class NSNumber, NSSet, NSString;

@interface DNDSApplicationConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSSet *allowedThreads;
@property (readonly, copy, nonatomic) NSSet *deniedThreads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMinimumBreakthroughUrgency:(id)a0 allowedThreads:(id)a1 deniedThreads:(id)a2;

@end
