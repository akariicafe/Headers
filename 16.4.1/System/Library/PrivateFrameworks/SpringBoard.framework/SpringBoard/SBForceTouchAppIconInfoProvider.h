@class NSString, SBIconContinuityItem;

@interface SBForceTouchAppIconInfoProvider : NSObject <SBIconAccessoryInfoProvider>

@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) SBIconContinuityItem *continuityItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
