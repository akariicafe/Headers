@interface VUIOverlayViewFactory : NSObject

+ (id)overlayViewWithElement:(id)a0 cardlayoutType:(long long)a1 existingView:(id)a2 canFallbackToInterfaceFactory:(BOOL)a3;
+ (long long)_overlayTypeFromString:(id)a0;
+ (id)_upnextOverlayWithElement:(id)a0 existingView:(id)a1;
+ (id)_sportsOverlayWithElement:(id)a0 cardlayoutType:(long long)a1 overlayType:(long long)a2 existingView:(id)a3;
+ (id)_overlayWithElement:(id)a0 overlayType:(long long)a1 existingView:(id)a2;
+ (id)_overlayWithMediaItem:(id)a0 overlayType:(long long)a1 existingView:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overlayPaddingWithElement:(id)a0;
+ (id)_gradientLayerWithViewElement:(id)a0 overlayType:(long long)a1 existingLayer:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overlayPaddingWithMediaItem:(id)a0;
+ (long long)overlayTypeOfElement:(id)a0;
+ (id)overlayViewWithMediaItem:(id)a0 overlayType:(long long)a1 existingView:(id)a2;

@end
