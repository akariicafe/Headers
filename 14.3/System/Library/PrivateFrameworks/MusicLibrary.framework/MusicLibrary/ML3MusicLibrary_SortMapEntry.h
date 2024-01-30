@class NSString, NSData;

@interface ML3MusicLibrary_SortMapEntry : NSObject {
    long long _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
    BOOL _dirty;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 nameSection:(int)a1 sortKey:(id)a2 nameOrder:(long long)a3 dirtyFlag:(BOOL)a4;
- (id)initWithName:(id)a0 nameSection:(int)a1 sortKey:(id)a2;

@end
