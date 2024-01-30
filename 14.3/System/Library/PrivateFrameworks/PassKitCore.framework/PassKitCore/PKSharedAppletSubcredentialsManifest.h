@class NSString, NSDictionary;

@interface PKSharedAppletSubcredentialsManifest : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSDictionary *items;
@property (readonly, nonatomic) NSDictionary *sanitizedItems;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
