@class NSArray;

@interface NSMetadataItem : NSObject {
    id _item;
    void *_reserved;
}

@property (readonly, copy) NSArray *attributes;

- (id)_item;
- (id)_init:(id)a0;
- (id)valueForKey:(id)a0;
- (void)_setQuery:(id)a0;
- (id)valuesForAttributes:(id)a0;
- (id)valueForAttribute:(id)a0;
- (void)dealloc;

@end
