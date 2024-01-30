@class NSString;

@interface ABFavoritesLookupChangeRecord : NSObject {
    int identifier;
    int uid;
    NSString *value;
    NSString *name;
    NSString *label;
    NSString *abDatabaseUUID;
}

@end
