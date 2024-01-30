@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property (readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;
@property (readonly) NSString *comparisonType;
@property (readonly) NSString *property;
@property (readonly) id value;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(id)a2;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_playlistAttributesForScriptArray:(id)a0;

@end
