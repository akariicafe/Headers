@class NSNumber, NSString;

@interface DNDSConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *applicationConfigurationType;
@property (readonly, copy, nonatomic) NSNumber *senderConfigurationType;
@property (readonly, copy, nonatomic) NSNumber *suppressionType;
@property (readonly, copy, nonatomic) NSNumber *minimumBreakthroughUrgency;
@property (readonly, copy, nonatomic) NSNumber *hideApplicationBadges;
@property (readonly, copy, nonatomic) NSNumber *compatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithApplicationConfigurationType:(id)a0 senderConfigurationType:(id)a1 suppressionType:(id)a2 minimumBreakthroughUrgency:(id)a3 hideApplicationBadges:(id)a4 compatibilityVersion:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithRecord:(id)a0;

@end
