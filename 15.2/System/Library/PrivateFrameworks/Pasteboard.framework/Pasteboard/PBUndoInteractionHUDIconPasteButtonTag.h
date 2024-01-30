@interface PBUndoInteractionHUDIconPasteButtonTag : PBPasteButtonTag

@property (readonly) double minWidth;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)grade;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned long long)hash;
- (id)initWithMinWidth:(double)a0;
- (id)_acceptCalloutBarPasteButtonTagVisit:(id /* block */)a0 systemInputAssistantPasteButtonTagVisit:(id /* block */)a1 undoInteractionHUDIconPasteButtonTagVisit:(id /* block */)a2 undoInteractionHUDTextPasteButtonTagVisit:(id /* block */)a3 contextMenuPasteButtonTagVisit:(id /* block */)a4;

@end
