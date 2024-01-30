@class NSArray, NSString, UIView, MULinkView;

@interface MUPlaceFooterAttributionController : NSObject {
    MULinkView *_attributionView;
}

@property (readonly, nonatomic) UIView *attributionView;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSArray *providerNames;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic, getter=isInteractable) BOOL interactable;

+ (id)attributionControllerForMapItem:(id)a0;
+ (id)attributionControllerForMapItemAttribution:(id)a0;
+ (id)transitAttributionControllerForMapItem:(id)a0 transitLine:(id)a1;
+ (id)vendorAttributionFormatString;

- (void)_updateTitle;
- (void).cxx_destruct;
- (void)_attributionTapped;
- (void)_setupAttribution;
- (id)initWithFormatString:(id)a0 providerNames:(id)a1 isInteractable:(BOOL)a2;

@end
