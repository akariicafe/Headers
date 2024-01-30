@class NSString;

@interface WLKFavorite : NSObject

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *leagueID;
@property (readonly, nonatomic) NSString *id;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
