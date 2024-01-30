@class NSString, NSNumberFormatter;

@interface SUScriptNumberFormatter : SUScriptObject {
    NSNumberFormatter *_numberFormatter;
}

@property (retain) NSString *localeIdentifier;
@property (retain) NSString *style;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)numberFromString:(id)a0;
- (void)dealloc;
- (id)init;
- (id)stringFromNumber:(id)a0;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
