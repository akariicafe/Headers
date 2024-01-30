@class NSString, NSDictionary, NSArray, NSURL, CARScreenViewArea;

@interface CARScreenInfo : NSObject

@property (nonatomic) unsigned long long systemAvailableInteractionModels;
@property (nonatomic) unsigned long long systemPrimaryInteractionModel;
@property (nonatomic) unsigned long long currentViewAreaTransitionControlType;
@property (nonatomic) BOOL wantsCornerMasks;
@property (nonatomic) BOOL initialFocusOwner;
@property (nonatomic) BOOL supportsAppearanceMode;
@property (nonatomic) BOOL supportsPerDisplayNightMode;
@property (nonatomic) BOOL supportsMapAppearanceMode;
@property (readonly, copy, nonatomic) NSDictionary *screenInfoResponse;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long screenType;
@property (readonly, nonatomic, getter=isLimitedUI) BOOL limitedUI;
@property (readonly, nonatomic) unsigned long long limitedUIElements;
@property (readonly, nonatomic, getter=isNightMode) BOOL nightMode;
@property (readonly, nonatomic) unsigned long long availableInteractionModels;
@property (readonly, nonatomic) unsigned long long primaryInteractionModel;
@property (readonly, nonatomic) BOOL supportsHighFidelityTouch;
@property (readonly, nonatomic) unsigned long long maxFramesPerSecond;
@property (readonly, nonatomic) struct CGSize { double width; double height; } physicalSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, copy, nonatomic) NSArray *viewAreas;
@property (retain, nonatomic) CARScreenViewArea *currentViewArea;
@property (retain, nonatomic) CARScreenViewArea *adjacentViewArea;
@property (readonly, nonatomic) NSURL *initialURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPropertySupplier:(id /* block */)a0 screenType:(unsigned long long)a1 additionalInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a2 displayDictionary:(id)a3;
- (id)_descriptionForInteractionModel:(unsigned long long)a0;
- (BOOL)_currentProcessHasEntitlement;
- (id)descriptionForAvailableInteractionModels;
- (id)descriptionForPrimaryInteractionModel;
- (id)initWithPropertySupplier:(id /* block */)a0 screenType:(unsigned long long)a1;
- (void)nightModeChanged:(BOOL)a0;
- (void)limitedUIChanged:(BOOL)a0;

@end
