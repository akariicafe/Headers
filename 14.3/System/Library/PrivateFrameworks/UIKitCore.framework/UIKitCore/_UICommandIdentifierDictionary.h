@class NSMutableDictionary, _UISelectorDictionary;

@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}

- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForAction:(SEL)a0 propertyList:(id)a1;
- (BOOL)intersectsEntriesFromDictionary:(id)a0;
- (unsigned long long)hash;
- (void)removeEntriesFromDictionary:(id)a0;
- (id)intersectingIdentifiersFromDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setObject:(id)a0 forAction:(SEL)a1 propertyList:(id)a2;
- (id)initWithDictionary:(id)a0;
- (id)objectForAction:(SEL)a0 propertyList:(id)a1;

@end
