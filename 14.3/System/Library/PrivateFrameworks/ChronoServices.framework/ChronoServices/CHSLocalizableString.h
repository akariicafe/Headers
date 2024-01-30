@class NSString, NSData;

@interface CHSLocalizableString : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSData *bundleBookmark;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) BOOL isVerbatim;

- (id)localizedString;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 tableName:(id)a1 bundlePath:(id)a2 isVerbatim:(BOOL)a3;
- (id)initWithString:(id)a0;
- (id)description;

@end
