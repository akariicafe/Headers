@class NSDictionary, NSString;

@interface VKClientLocalizedStrings : NSObject {
    NSDictionary *_stringDictionary;
    NSString *_locale;
}

- (void)dealloc;
- (void)getTextForKey:(id)a0 text:(id *)a1 locale:(id *)a2;
- (id)initWithStrings:(id)a0 locale:(id)a1;

@end
