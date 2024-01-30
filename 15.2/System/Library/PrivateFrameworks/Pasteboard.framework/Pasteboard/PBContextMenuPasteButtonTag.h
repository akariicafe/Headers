@interface PBContextMenuPasteButtonTag : PBPasteButtonTag

@property (readonly) unsigned long long variantIndex;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) struct CGPoint { double x; double y; } titleOrigin;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)grade;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)hash;
- (id)initWithVariantIndex:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 titleOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4;

@end
