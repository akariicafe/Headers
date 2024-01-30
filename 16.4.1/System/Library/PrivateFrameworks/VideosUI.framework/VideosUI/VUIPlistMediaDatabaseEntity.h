@class NSString, NSURL, NSNumber;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *genreTitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSURL *coverArtURL;
@property (copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic, getter=isLocal) NSNumber *local;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (void)_mediaEntityPropertyDidChange:(id)a0;

@end
