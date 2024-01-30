@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)ABValueFromCNValue:(id)a0;
- (Class)valueClass;
- (id)CNMutableValueForABMultivalue;
- (id)CNValueFromABValue:(void *)a0;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;

@end
