@class NSString, NSNumber, GEOMapItemStorage;

@interface MSFavoriteItem : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _customName;
    void /* unknown type, empty encoding */ _hidden;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _originatingAddressString;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _shortcutIdentifier;
    void /* unknown type, empty encoding */ _source;
    void /* unknown type, empty encoding */ _type;
    void /* unknown type, empty encoding */ _version;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _handleChanges;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;

+ (id)findDuplicatesWithContext:(id)a0;
+ (id)mergeWithDuplicates:(id)a0;
+ (id)optionsWith:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (void)addContactHandle:(id)a0;
- (id)fetchContactHandles;
- (void)flushChanges;
- (id)initWithObject:(id)a0 store:(id)a1;
- (id)initWithStore:(id)a0 customName:(id)a1 hidden:(BOOL)a2 latitude:(id)a3 longitude:(id)a4 muid:(id)a5 originatingAddressString:(id)a6 positionIndex:(long long)a7 shortcutIdentifier:(id)a8 source:(short)a9 type:(short)a10 version:(short)a11;
- (void)onFirstSaveWithObject:(id)a0 context:(id)a1;
- (void)removeContactHandle:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0;

@end
