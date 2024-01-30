@class UIColor, NSString, UIImage, UIView;

@interface SBUISystemApertureImageContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *providedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *contentColor;

@end
