@class NSArray, NSString, SHMediaLibraryItemMetadata, NSMutableArray;

@interface SHMediaLibraryGroup : NSObject <SHMediaLibraryItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *mutableTracksToSave;
@property (readonly, nonatomic) NSArray *tracksToSave;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SHMediaLibraryItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTracks:(id)a0;
- (id)_initWithIdentifier:(id)a0 metadata:(id)a1 tracksToSave:(id)a2;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1;
- (BOOL)isEqualGroup:(id)a0;
- (void)removeTracks:(id)a0;
- (BOOL)validIdentifier:(id)a0;

@end
