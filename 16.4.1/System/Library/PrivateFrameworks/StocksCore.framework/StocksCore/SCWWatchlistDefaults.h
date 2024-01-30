@class NSArray;

@interface SCWWatchlistDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultSymbols;

+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_defaultSymbolsByCountryCode;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)defaultsForCurrentCountry;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)defaultsWithDefaultSymbols:(id)a0;
+ (id)emptyDefaults;

- (void).cxx_destruct;
- (id)defaultsByAppendingDefaults:(id)a0;
- (id)initWithDefaultSymbols:(id)a0;

@end
