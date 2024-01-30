@interface WFiTunesProductContentItem : WFiTunesObjectContentItem

+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)mediaTrackObject;
- (id)storeObject;

@end
