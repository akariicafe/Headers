@class NSString, NSNumber;

@interface MCBook : NSObject <NSCopying>

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
@property (retain, nonatomic) MCBook *previousVersion;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithManifestDictionary:(id)a0;
- (id)manifestDictionary;
- (void)updateBookAttributesByCopyingFromBook:(id)a0;
- (id)description;
- (id)friendlyName;

@end
