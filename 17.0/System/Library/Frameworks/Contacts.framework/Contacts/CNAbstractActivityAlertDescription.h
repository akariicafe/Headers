@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)valueClass;
- (BOOL)canUnifyValue:(id)a0 withValue:(id)a1;
- (id)CNValueFromABValue:(void *)a0;
- (void *)ABValueFromCNValue:(id)a0;
- (id)CNMutableValueForABMultivalue;

@end
