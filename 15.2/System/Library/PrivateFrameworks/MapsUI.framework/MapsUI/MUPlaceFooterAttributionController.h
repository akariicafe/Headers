@class NSArray, MUPlaceLinkFooterAttributionView, UIView;

@interface MUPlaceFooterAttributionController : NSObject {
    MUPlaceLinkFooterAttributionView *_attributionButton;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedProviderListRange;
}

@property (readonly, nonatomic) UIView *attributionView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSArray *providerNames;

+ (id)attributionControllerForMapItemAttribution:(id)a0;
+ (id)attributionControllerForMapItem:(id)a0;
+ (id)transitAttributionControllerForMapItem:(id)a0 transitLine:(id)a1;

- (void)_updateTitle;
- (void).cxx_destruct;
- (id)initWithProviderNames:(id)a0;
- (void)_setupAttribution;
- (void)_attributionTapped;

@end
