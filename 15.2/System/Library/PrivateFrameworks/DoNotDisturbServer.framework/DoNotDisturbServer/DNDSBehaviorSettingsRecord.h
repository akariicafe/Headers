@class NSNumber, NSString;

@interface DNDSBehaviorSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *interruptionBehaviorSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)_recordWithEncodedInfo:(id)a0 error:(id *)a1;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInterruptionBehaviorSetting:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
