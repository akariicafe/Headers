@interface HFHumidifierDehumidifierServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (void)_formatDescription:(out id *)a0 controlDescription:(out id *)a1 optionalDescriptions:(out id *)a2 forResponse:(id)a3;
- (id)createControlItemsWithOptions:(id)a0;

@end
