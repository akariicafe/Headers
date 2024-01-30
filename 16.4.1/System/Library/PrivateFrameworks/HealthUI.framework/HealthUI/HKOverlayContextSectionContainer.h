@class NSString, NSArray, HKDisplayType;

@interface HKOverlayContextSectionContainer : NSObject

@property (readonly, nonatomic) NSString *localizedContainerTitle;
@property (readonly, nonatomic) NSArray *overlayContextSections;
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType;

- (void).cxx_destruct;
- (id)initWithContainerTitle:(id)a0 overlayContextSections:(id)a1;
- (id)initWithContainerTitle:(id)a0 overlayContextSections:(id)a1 primaryDisplayType:(id)a2;

@end
