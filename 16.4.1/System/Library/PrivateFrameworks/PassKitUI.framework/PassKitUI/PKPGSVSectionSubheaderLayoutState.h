@class PKPGSVSectionSubheaderContext;

@interface PKPGSVSectionSubheaderLayoutState : NSObject {
    PKPGSVSectionSubheaderContext *_context;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerRect;
}

- (id)init;
- (void).cxx_destruct;

@end
