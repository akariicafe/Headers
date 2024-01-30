@class NSString;

@interface WLKGenre : NSObject

@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)genresWithDictionaries:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
