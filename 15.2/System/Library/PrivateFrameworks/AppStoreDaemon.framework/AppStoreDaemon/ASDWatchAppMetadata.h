@class NSString, NSNumber;

@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL skipIfInstalled;
@property (copy) NSString *altDSID;
@property (copy) NSString *appleID;
@property (copy) NSString *bundleID;
@property (copy) NSNumber *downloaderID;
@property (copy) NSNumber *externalVersionID;
@property (copy) NSNumber *itemID;
@property (copy) NSNumber *previousExternalVersionID;
@property (copy) NSString *previousVariantID;
@property (copy) NSNumber *purchaserID;
@property (copy) NSString *redownloadParams;
@property (getter=isUserInitiated) BOOL userInitiated;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metadataFromStoreMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreMetadata:(id)a0;
- (id)initWithItemID:(id)a0 externalVersionID:(id)a1;

@end
