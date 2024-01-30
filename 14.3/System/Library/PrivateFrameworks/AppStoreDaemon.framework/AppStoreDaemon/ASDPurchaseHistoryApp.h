@class NSString, NSArray, NSURL, NSDate;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleID;
@property (copy) NSString *circularIconURLString;
@property long long contentRatingFlags;
@property (copy) NSDate *datePurchased;
@property (copy) NSString *developerName;
@property (getter=isFamilyShared) BOOL familyShared;
@property (getter=isFirstParty) BOOL firstParty;
@property long long genreID;
@property (copy) NSString *genreName;
@property BOOL hasMessagesExtension;
@property BOOL hasP3;
@property (getter=isHidden) BOOL hidden;
@property (getter=isHiddenFromSpringboard) BOOL hiddenFromSpringboard;
@property (copy) NSString *iconURLString;
@property BOOL is32BitOnly;
@property BOOL isPreorder;
@property (copy) NSString *longTitle;
@property (copy) NSArray *macAppRequiredCapabilities;
@property unsigned int mediaKind;
@property BOOL isIOSBinaryMacOSAvailable;
@property BOOL isIOSBinaryMacOSCompatible;
@property BOOL isVerifiedForMacOS;
@property BOOL runsOnIntel;
@property BOOL runsOnAppleSilicon;
@property BOOL requiresRosetta;
@property (copy) NSString *ovalIconURLString;
@property (copy) NSURL *preflightPackageURL;
@property (copy) NSURL *productURL;
@property long long purchaserDSID;
@property (copy) NSString *redownloadParams;
@property (copy) NSArray *requiredCapabilities;
@property long long storeItemID;
@property BOOL supportsIPad;
@property BOOL supportsIPhone;
@property BOOL supportsLayeredImage;
@property BOOL supportsMac;
@property (copy) NSString *title;
@property BOOL watchAppDeliveredIniOSApp;
@property BOOL watchAppRunsIndependently;
@property BOOL watchOnly;
@property unsigned int purchaseToken;
@property unsigned long long lockerItemID;
@property (readonly) BOOL hasAnyMacOSCompatibleIOSVersion;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)_bitfieldForBooleanProperties;
- (void)_setBooleanPropertiesForBitfield:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
