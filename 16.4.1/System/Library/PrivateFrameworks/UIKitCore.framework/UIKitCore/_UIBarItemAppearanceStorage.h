@class NSMutableDictionary;

@interface _UIBarItemAppearanceStorage : NSObject {
    NSMutableDictionary *textAttributesForState;
}

- (id)textAttributesForState:(unsigned long long)a0;
- (void)setTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)enumerateTextAttributesWithBlock:(id /* block */)a0;
- (void)setTextAttribute:(id)a0 forKey:(id)a1 state:(unsigned long long)a2;
- (id)textAttributeForKey:(id)a0 state:(unsigned long long)a1;

@end
