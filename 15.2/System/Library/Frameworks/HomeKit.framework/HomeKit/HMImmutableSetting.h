@class NSString, NSArray;

@interface HMImmutableSetting : NSObject <HMMessageEncoding, HMFObject>

@property (readonly, copy) NSString *keyPath;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)settingWithSettingValue:(id)a0;
- (id)settingValue;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1;

@end
