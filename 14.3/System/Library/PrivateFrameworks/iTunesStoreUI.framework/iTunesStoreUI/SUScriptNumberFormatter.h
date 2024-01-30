@class NSString, NSNumberFormatter;

@interface SUScriptNumberFormatter : SUScriptObject {
    NSNumberFormatter *_numberFormatter;
}

@property (retain) NSString *localeIdentifier;
@property (retain) NSString *style;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)stringFromNumber:(id)a0;
- (id)numberFromString:(id)a0;
- (id)scriptAttributeKeys;

@end
