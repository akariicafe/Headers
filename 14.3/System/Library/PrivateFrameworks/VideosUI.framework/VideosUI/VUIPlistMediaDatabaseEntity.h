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

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)_mediaEntityPropertyDidChange:(id)a0;

@end
