@class NSArray, NSString;

@interface DNDSModeConfigurationTriggersRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>

@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0 partitionedDictionaryRepresentation:(id)a1 context:(id)a2;

- (id)initWithTriggers:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithTriggers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;

@end
