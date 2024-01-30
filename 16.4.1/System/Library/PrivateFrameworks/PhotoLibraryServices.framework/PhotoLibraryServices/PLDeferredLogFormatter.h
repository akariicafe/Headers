@class NSMutableArray;

@interface PLDeferredLogFormatter : NSObject {
    NSMutableArray *_entries;
}

+ (id)_entityDescriptionForContext:(long long)a0;
+ (BOOL)_isManagedObjectPointerForContext:(long long)a0;
+ (id)_logTypeForContext:(long long)a0;
+ (id)_serializableDictionaryForEntry:(id)a0;

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)stringWithFormat:(long long)a0;
- (id)_JSONStringPretty:(BOOL)a0;
- (id)_formattedStringForPrinting;
- (id)_plistString;
- (void)addLogWithContext:(long long)a0 timestamp:(double)a1 pointer:(unsigned long long)a2;

@end
