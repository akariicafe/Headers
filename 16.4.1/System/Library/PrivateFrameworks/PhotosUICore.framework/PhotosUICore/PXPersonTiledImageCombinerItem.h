@class NSString;
@protocol PXPerson;

@interface PXPersonTiledImageCombinerItem : NSObject <PXFaceTileImageCombinerItem> {
    id<PXPerson> _person;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (void)px_requestImageWithTargetSize:(struct CGSize { double x0; double x1; })a0 displayScale:(double)a1 isRTL:(BOOL)a2 resultHandler:(id /* block */)a3;

@end
