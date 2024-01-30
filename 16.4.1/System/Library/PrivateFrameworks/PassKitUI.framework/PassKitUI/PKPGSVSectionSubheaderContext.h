@class UIView;
@protocol PKPGSVSectionSubheaderView;

@interface PKPGSVSectionSubheaderContext : NSObject {
    UIView<PKPGSVSectionSubheaderView> *_view;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _margins;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
