@class ATXHeuristicDevice;

@interface ATXFavoriteContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

+ (id)_entryToDict:(id)a0 device:(id)a1;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)favoritesWithContacts:(id)a0 callback:(id /* block */)a1;

@end
