@class NSString, NFLFontCache, NFUnfairLock;

@interface NFLAbstractCellPropertyProvider : NSObject {
    id *_propertiesByColumnSpan;
}

@property (nonatomic) Class propertyClass;
@property (retain, nonatomic) NSString *plistName;
@property (nonatomic) unsigned long long propertiesByColumnSpanSize;
@property (retain, nonatomic) NFUnfairLock *propertiesLock;
@property (readonly, nonatomic) double scaleValue;
@property (readonly, nonatomic) NFLFontCache *fontCache;

+ (id)plistProvider;
+ (id)publisherTitleFontLarge;
+ (id)publisherTitleFontSmall;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)propertiesForColumnSpan:(long long)a0;
- (id)initWithScaleValue:(double)a0 preferredContentSizeCategory:(id)a1 fontCache:(id)a2 plistName:(id)a3 propertyClass:(Class)a4;
- (void)_loadIfNeeded;

@end
