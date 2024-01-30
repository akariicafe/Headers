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
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKey:(const char *)a0;

- (id)_className;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)_safeValueForValue:(id)a0;
- (id)scriptAttributeKeys;
- (id)newNativeStorePageRequest;

@end
