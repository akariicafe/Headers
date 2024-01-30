@class NSString, SASettingEntity;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASettingEntity *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setValueResponse;
+ (id)setValueResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
