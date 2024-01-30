@class NSNumber, NSString, UISApplicationSupportDisplayEdgeInsetsWrapper;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying> {
    union { unsigned long long asInt; struct { unsigned char assertOnMutationAttempt : 1; } flags; } _infoFlags;
}

@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *peripheryInsets;
@property (retain, nonatomic) NSNumber *systemMinimumMargin;
@property (retain, nonatomic) NSNumber *homeAffordanceOverlayAllowance;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortrait;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeLeft;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsPortraitUpsideDown;
@property (retain, nonatomic) UISApplicationSupportDisplayEdgeInsetsWrapper *safeAreaInsetsLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDisplayEdgeInfoForceInsets:(BOOL)a0;
+ (id)defaultDisplayEdgeInfo;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)_copyFromOtherInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_performIvarUpdateIfAllowed:(id /* block */)a0;

@end
