@class NSString, NSNumberFormatter;

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {
    void *_formatter;
    BOOL _isForPersonHeight;
    void *_reserved[2];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;
@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse;

- (void)receiveObservedValue:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)unitStringFromMeters:(double)a0 usedUnit:(long long *)a1;
- (id)stringFromMeters:(double)a0;
- (long long)targetUnitFromMeters:(double)a0;
- (id)stringFromValue:(double)a0 unit:(long long)a1;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)unitStringFromValue:(double)a0 unit:(long long)a1;

@end
