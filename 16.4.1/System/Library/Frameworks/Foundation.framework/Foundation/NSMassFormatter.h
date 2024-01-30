@class NSString, NSNumberFormatter, NSUnitFormatter;

@interface NSMassFormatter : NSFormatter <NSObservable, NSObserver> {
    NSUnitFormatter *_unitFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;
@property (getter=isForPersonMassUse) BOOL forPersonMassUse;

- (void)receiveObservedValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)unitStringFromValue:(double)a0 unit:(long long)a1;
- (void)dealloc;
- (id)init;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)stringFromKilograms:(double)a0;
- (id)stringFromValue:(double)a0 unit:(long long)a1;
- (long long)targetUnitFromKilograms:(double)a0;
- (id)unitStringFromKilograms:(double)a0 usedUnit:(long long *)a1;

@end
