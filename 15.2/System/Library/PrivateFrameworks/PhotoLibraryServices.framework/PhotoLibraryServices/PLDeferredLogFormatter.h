@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject {
    NSMutableArray *_entries;
}

+ (id)_serializableDictionaryForEntry:(id)a0;
+ (id)_entityDescriptionForContext:(long long)a0;
+ (id)_logTypeForContext:(long long)a0;
+ (BOOL)_isManagedObjectPointerForContext:(long long)a0;

- (id)stringWithFormat:(long long)a0;
- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)addLogWithContext:(long long)a0 timestamp:(double)a1 pointer:(unsigned long long)a2;
- (id)_formattedStringForPrinting;
- (id)_JSONStringPretty:(BOOL)a0;
- (id)_plistString;

@end
