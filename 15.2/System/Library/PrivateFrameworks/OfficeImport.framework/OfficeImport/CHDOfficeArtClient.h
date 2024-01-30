@class NSString, CHDAnchor;

@interface CHDOfficeArtClient : NSObject <OADClient> {
    CHDAnchor *mAnchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchor;
- (void)setAnchor:(id)a0;
- (BOOL)hasBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;

@end
