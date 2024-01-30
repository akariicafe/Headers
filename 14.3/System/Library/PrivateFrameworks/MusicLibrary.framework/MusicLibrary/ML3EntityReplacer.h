@class ML3MusicLibrary, NSMutableArray, ML3DatabaseConnection;

@interface ML3EntityReplacer : NSObject {
    struct __CFDictionary { } *_propertyToIndexPair;
    NSMutableArray *_naturalStatements;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
}

@property (readonly, nonatomic, getter=isOpen) BOOL open;

- (BOOL)perform;
- (void)clearBindings;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bindValue:(id)a0 forProperty:(id)a1;
- (id)initWithEntityClass:(Class)a0 properties:(id)a1 library:(id)a2;
- (void)bindNullForProperty:(id)a0;
- (void)bindInt:(int)a0 forProperty:(id)a1;
- (void)bindDouble:(double)a0 forProperty:(id)a1;
- (void)bindPersistentID:(long long)a0;

@end
