@class PKPGSVSectionHeaderContext, NSArray;

@interface PKPGSVSectionHeaderLayoutState : NSObject {
    PKPGSVSectionHeaderContext *_context;
    double _headerOpacity;
    NSArray *_subheaderLayoutStates;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _headerContainerRect;
}

- (id)init;
- (void).cxx_destruct;

@end
