@class NSString, SSItemImageCollection, NSDate, NSNumber;

@interface SSPreorder : NSObject <SSXPCCoding> {
    double _releaseDate;
}

@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) SSItemImageCollection *imageCollection;
@property (readonly, nonatomic) NSString *itemKind;
@property (readonly, nonatomic) long long persistentIdentifier;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSString *releaseDateString;
@property (readonly, nonatomic) NSNumber *storeAccountIdentifier;
@property (readonly, nonatomic) unsigned long long storeItemIdentifier;
@property (readonly, nonatomic) unsigned long long storePreorderIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setTitle:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)_setArtistName:(id)a0;
- (id)copyReleaseDateStringWithStyle:(long long)a0;
- (id)_initWithPersistentIdentifier:(long long)a0;
- (void)_setImageCollection:(id)a0;
- (void)_setItemKind:(id)a0;
- (void)_setReleaseDate:(id)a0;
- (void)_setReleaseDateString:(id)a0;
- (void)_setStoreAccountIdentifier:(id)a0;
- (void)_setStoreItemIdentifier:(long long)a0;
- (void)_setStorePreorderIdentifier:(long long)a0;

@end
