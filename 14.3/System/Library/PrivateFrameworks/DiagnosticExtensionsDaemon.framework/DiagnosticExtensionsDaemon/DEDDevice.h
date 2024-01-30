@class NSString, NSSet, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *_hashingKey;
@property (retain) NSSet *capabilities;
@property (retain) NSString *address;
@property (retain) NSString *build;
@property (retain) NSString *color;
@property (retain) NSString *deviceClass;
@property (retain) NSString *enclosureColor;
@property (retain) NSString *identifier;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *productType;
@property (retain) NSString *platform;
@property long long status;
@property long long transport;
@property long long remoteTransport;
@property (retain) SFDevice *sfDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (id)archivedClasses;
+ (id)nilSafeDevice;
+ (id)deviceWithDictionary:(id)a0;
+ (id)_currentDeviceId;
+ (id)deviceForSFDevice:(id)a0 andStatus:(long long)a1;
+ (id)deviceForSFDevice:(id)a0 systemInfo:(id)a1 andStatus:(long long)a2;
+ (id)idsDeviceWithDevice:(id)a0 address:(id)a1;

- (id)imageData;
- (id)serialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (id)publicLogDescription;
- (BOOL)isCurrentDevice;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)hashingKey;
- (id)hashingKeyForTempDevice;
- (BOOL)isTemporaryDevice;
- (BOOL)isLikeDevice:(id)a0;
- (BOOL)isMoreCompleteThan:(id)a0;
- (id)imageURLForScale:(float)a0;
- (id)imageURLForDeviceClass:(id)a0 deviceModel:(id)a1 deviceColor:(id)a2 size:(long long)a3 variant:(long long)a4 scale:(float)a5;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;

@end
