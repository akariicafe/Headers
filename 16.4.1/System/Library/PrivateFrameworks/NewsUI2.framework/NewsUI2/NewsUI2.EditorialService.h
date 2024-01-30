@interface NewsUI2.EditorialService : NSObject <TSEditorialItemChangeDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ editorialItemProvider;
}

- (void)refreshEditorialItemsWithItems:(id)a0;
- (void)updateEditorialItemWith:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
