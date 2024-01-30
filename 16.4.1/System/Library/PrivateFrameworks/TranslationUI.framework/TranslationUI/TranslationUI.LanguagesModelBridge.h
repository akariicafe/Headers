@class NSString, NSLocale;

@interface TranslationUI.LanguagesModelBridge : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ displayName;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ status;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
