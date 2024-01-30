@class NSString, NSURL, NSData, NSNumber, MIStoreMetadata;

@interface ASDAppReviewAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *artworkURL;
@property (nonatomic, getter=isBeta) BOOL beta;
@property (readonly, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (nonatomic) BOOL hasMessagesExtension;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (copy, nonatomic) NSURL *messagesArtworkURL;
@property (copy, nonatomic) NSData *packageDPInfo;
@property (copy, nonatomic) NSData *packageSINF;
@property (copy, nonatomic) NSURL *packageURL;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *vendorName;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
