@class NSString;

@interface CNFavoritesLookupChangeRecord : NSObject

@property int identifier;
@property int uid;
@property (retain) NSString *value;
@property (retain) NSString *name;
@property (retain) NSString *label;
@property (retain) NSString *abDatabaseUUID;

- (void).cxx_destruct;

@end
