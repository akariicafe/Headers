@class NSString;

@interface CNFavoritesLookupChangeRecord : NSObject {
    int identifier;
    int uid;
    NSString *value;
    NSString *name;
    NSString *label;
    NSString *abDatabaseUUID;
}

- (void).cxx_destruct;

@end
