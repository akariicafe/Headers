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
+ (id)deviceForSFDevice:(id)a0 andStatus:(long long)a1;
+ (id)_currentDeviceId;
+ (id)nilSafeDevice;
+ (id)deviceForSFDevice:(id)a0 systemInfo:(id)a1 andStatus:(long long)a2;
+ (id)archivedClasses;
+ (id)idsDeviceWithDevice:(id)a0 address:(id)a1;
+ (id)deviceWithDictionary:(id)a0;

- (id)publicLogDescription;
- (BOOL)isCurrentDevice;
- (id)shortDescription;
- (id)imageData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (BOOL)isMoreCompleteThan:(id)a0;
- (id)serialize;
- (BOOL)isLikeDevice:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)imageURLForDeviceClass:(id)a0 deviceModel:(id)a1 deviceColor:(id)a2 size:(long long)a3 variant:(long long)a4 scale:(float)a5;
- (void)fetchIconImageDataForScale:(float)a0 completionCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)hashingKey;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageURLForScale:(float)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)hashingKeyForTempDevice;

@end
