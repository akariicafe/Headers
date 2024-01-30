@class NSString, NSNumber;

@interface MDMBook : NSObject <NSCopying>

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *downloadIdentifier;
@property (retain, nonatomic) MDMBook *previousVersion;

- (id)description;
- (id)initWithManifestDictionary:(id)a0;
- (id)manifestDictionary;
- (void)updateBookAttributesByCopyingFromBook:(id)a0;
- (id)friendlyName;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
