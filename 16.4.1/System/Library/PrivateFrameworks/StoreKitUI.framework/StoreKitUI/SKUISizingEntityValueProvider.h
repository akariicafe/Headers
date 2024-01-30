@class NSString, NSMutableDictionary;

@interface SKUISizingEntityValueProvider : NSObject <IKEntityValueProviding> {
    NSMutableDictionary *_tallestValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)entityUniqueIdentifier;
- (void)_insertTallestValueForViewElement:(id)a0;
- (id)imageURLForEntityArtworkProperty:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 destinationScale:(double)a2;
- (id)initForViewElement:(id)a0;
- (id)valueForEntityProperty:(id)a0;
- (id)valuesForEntityProperties:(id)a0;

@end
