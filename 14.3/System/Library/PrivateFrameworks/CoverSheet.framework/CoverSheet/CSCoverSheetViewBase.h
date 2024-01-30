@class NSArray, NSString;
@protocol UICoordinateSpace;

@interface CSCoverSheetViewBase : SBFTouchPassThroughView <CSPresentationProviding>

@property (readonly, weak, nonatomic) id<UICoordinateSpace> presentationCoordinateSpace;
@property (readonly, copy, nonatomic) NSArray *presentationRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCoverSheetView;

@end
