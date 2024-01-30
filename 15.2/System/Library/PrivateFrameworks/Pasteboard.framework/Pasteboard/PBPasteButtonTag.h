@interface PBPasteButtonTag : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2 titleWidth:(double)a3 contentScaleLevel:(unsigned long long)a4;
+ (id)contextMenuPasteButtonTagWithVariantIndex:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2;
+ (id)systemInputAssistantPasteButtonTagWithSite:(long long)a0;
+ (id)systemInputAssistantPasteButtonTag;
+ (id)undoInteractionHUDIconPasteButtonTagWithMinWidth:(double)a0;
+ (id)undoInteractionHUDTextPasteButtonTagWithMinWidth:(double)a0;
+ (id)calloutBarPasteButtonTagWithVariantIndex:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2 contentScaleLevel:(unsigned long long)a3;

- (unsigned long long)grade;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4;

@end
