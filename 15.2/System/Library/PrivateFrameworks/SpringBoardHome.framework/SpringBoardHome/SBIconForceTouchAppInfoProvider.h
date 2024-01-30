@class NSString;

@interface SBIconForceTouchAppInfoProvider : NSObject <SBIconAccessoryInfoProvider>

@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long continuityBadgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
