@class NSArray;

@interface SCWatchlistDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultSymbols;

+ (id)defaultsForCurrentCountry;
+ (id)defaultsFromCarrierBundle;
+ (id)_defaultSymbolsByCountryCode;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)defaultsWithDefaultSymbols:(id)a0;
+ (id)emptyDefaults;
+ (id)defaultsHistoryForCurrentCountry;

- (void).cxx_destruct;
- (id)initWithDefaultSymbols:(id)a0;
- (id)defaultsByAppendingDefaults:(id)a0;

@end
