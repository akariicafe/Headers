@class NSNumber, NSString;

@interface DNDSMeDeviceStore : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *meDeviceStatus;
@property (readonly, copy, nonatomic) NSString *meDeviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;

- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStore:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStatus:(id)a0 name:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
