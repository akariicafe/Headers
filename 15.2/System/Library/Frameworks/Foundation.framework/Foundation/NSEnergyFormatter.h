@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {
    void *_formatter;
    void *_reserved[2];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;

- (id)stringForObjectValue:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)receiveObservedValue:(id)a0;
- (id)unitStringFromJoules:(double)a0 usedUnit:(long long *)a1;
- (id)stringFromValue:(double)a0 unit:(long long)a1;
- (long long)targetUnitFromJoules:(double)a0;
- (id)stringFromJoules:(double)a0;
- (id)init;
- (id)unitStringFromValue:(double)a0 unit:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;

@end
