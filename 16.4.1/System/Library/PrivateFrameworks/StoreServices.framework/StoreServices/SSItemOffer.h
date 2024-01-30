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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)setBuyParameters:(id)a0;
- (void)setOneTapOffer:(BOOL)a0;
- (id)allowedToneStyles;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (id)documentUTI;
- (id)initWithOfferIdentifier:(id)a0 dictionary:(id)a1;
- (id)playableMedia;
- (void)setActionDisplayName:(id)a0;
- (void)setPriceDisplay:(id)a0;

@end
