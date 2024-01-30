@class FBSDisplayIdentity, NSString, FBSDisplayMode, NSSet, CADisplay;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    BOOL _noEqual_comparable;
    int _pid;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    struct CGSize { double width; double height; } _overscanAmounts;
    CADisplay *_caDisplay;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) long long tags;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode;
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, copy, nonatomic) NSSet *availableModes;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (readonly, nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } safeOverscanRatio;
@property (readonly, nonatomic) double nativeOrientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } renderingCenter;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) long long colorGamut;
@property (readonly, nonatomic) double latency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uniqueID;
- (id)initWithXPCDictionary:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (BOOL)expectsSecureRendering;
- (BOOL)supportsExtendedColor;
- (id)copyWithUniqueIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_nameForDisplayType;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)laterConfiguration:(id)a0;
- (struct CGPoint { double x0; double x1; })nativeCenter;
- (id)CADisplay;
- (id)copyWithOverrideMode:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)_nativeRotation;
- (id)copyForSecureRendering;
- (unsigned int)displayID;
- (id)initWithCoder:(id)a0;
- (double)orientation;
- (id)initWithCADisplay:(id)a0 isMainDisplay:(BOOL)a1;
- (id)_initWithIdentity:(id)a0 hardwareIdentifier:(id)a1 name:(id)a2 deviceName:(id)a3 seed:(unsigned int)a4 comparable:(BOOL)a5 tags:(long long)a6 currentMode:(id)a7 preferredMode:(id)a8 otherModes:(id)a9 cloningSupported:(BOOL)a10 overscanned:(BOOL)a11 overscanCompensation:(long long)a12 safeOverscanRatio:(struct CGSize { double x0; double x1; })a13 pixelSize:(struct CGSize { double x0; double x1; })a14 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a15 renderingCenter:(struct CGPoint { double x0; double x1; })a16 latency:(double)a17 validityCheck:(long long)a18;
- (id)uniqueIdentifier;
- (long long)type;
- (BOOL)isConnected;
- (id)succinctDescriptionBuilder;
- (BOOL)isHiddenDisplay;
- (BOOL)isEqual:(id)a0;
- (id)_initWithImmutableDisplay:(id)a0 originalDisplay:(id)a1 assertIfInvalid:(BOOL)a2;
- (id)initWithCADisplay:(id)a0;
- (BOOL)wantsConnectionDebouncing;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isMainRootDisplay;
- (id)caDisplay;
- (void)encodeWithCoder:(id)a0;

@end
