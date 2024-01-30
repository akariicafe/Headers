@class NSArray, UIView;
@protocol PKPGSVSectionHeaderView;

@interface PKPGSVSectionHeaderContext : NSObject {
    UIView<PKPGSVSectionHeaderView> *_headerView;
    NSArray *_subheaderContexts;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerMargins;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
