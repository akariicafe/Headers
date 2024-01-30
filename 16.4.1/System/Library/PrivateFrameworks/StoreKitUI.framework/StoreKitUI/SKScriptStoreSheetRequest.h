@class NSString, WebScriptObject;

@interface SKScriptStoreSheetRequest : SUScriptObject {
    long long _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

@property long long productPageStyle;
@property (retain) WebScriptObject *productParameters;
@property (retain) NSString *productURL;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStyleBanner;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)a0;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void).cxx_destruct;
- (id)_className;
- (id)attributeKeys;
- (id)_safeValueForValue:(id)a0;
- (id)newNativeStorePageRequest;
- (id)scriptAttributeKeys;

@end
