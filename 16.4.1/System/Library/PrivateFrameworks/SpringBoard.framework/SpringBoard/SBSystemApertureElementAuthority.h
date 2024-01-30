@class NSString;
@protocol SBSystemApertureElementAuthorityDelegate;

@interface SBSystemApertureElementAuthority : NSObject <SAElementConsidering>

@property (weak, nonatomic) id<SBSystemApertureElementAuthorityDelegate> elementAuthorityDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)elementsOrderedByPromotionFromTemporallyOrderedElements:(id)a0 withPreviousOrdering:(id)a1;

@end
