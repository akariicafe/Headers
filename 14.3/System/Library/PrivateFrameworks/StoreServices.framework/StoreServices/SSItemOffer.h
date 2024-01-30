@class SSItem, NSString, NSArray, NSSet, SSItemMedia, SSNetworkConstraints, NSMutableDictionary, SSDialog;

@interface SSItemOffer : NSObject <NSCopying> {
    NSMutableDictionary *_offerDictionary;
    NSArray *_supportedDevices;
}

@property (nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem;
@property (readonly, nonatomic) NSSet *accountIdentifiers;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long estimatedDiskSpaceNeeded;
@property (readonly, nonatomic) id requiredSoftwareCapabilities;
@property (readonly, nonatomic) BOOL shouldShowPlusIcon;
@property (readonly, nonatomic) NSString *offerIdentifier;
@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) NSString *priceDisplay;
@property (readonly, nonatomic) NSString *actionDisplayName;
@property (readonly, nonatomic, getter=isOneTapOffer) BOOL oneTapOffer;
@property (readonly, nonatomic, getter=isPreorder) BOOL preorder;
@property (readonly, nonatomic) SSItemMedia *offerMedia;
@property (readonly, nonatomic) SSDialog *confirmationDialog;
@property (readonly, nonatomic) SSDialog *successDialog;
@property (readonly, nonatomic) NSArray *supportedDevices;
@property (readonly, nonatomic) SSNetworkConstraints *networkConstraints;

+ (id)_preferredOfferIdentifiers;

- (id)valueForProperty:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)allowedToneStyles;
- (id)initWithOfferIdentifier:(id)a0 dictionary:(id)a1;
- (id)description;
- (id)documentUTI;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (void)setActionDisplayName:(id)a0;
- (void)setOneTapOffer:(BOOL)a0;
- (void)setPriceDisplay:(id)a0;
- (void)setBuyParameters:(id)a0;
- (id)playableMedia;

@end
