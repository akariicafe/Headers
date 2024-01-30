@class NSString, NSData, NSFileHandle;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *libraryPath;
@property (readonly, nonatomic) NSData *trackData;
@property (readonly, nonatomic) NSData *playlistData;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSString *syncAnchor;
@property (readonly, nonatomic, getter=isResetSync) BOOL resetSync;
@property (readonly, nonatomic, getter=isSagaEnabled) BOOL sagaEnabled;
@property (readonly, nonatomic) long long storeAccountID;
@property (readonly, nonatomic) long long preferredVideoQuality;
@property (readonly, nonatomic) unsigned int homeSharingBasePlaylistID;
@property (readonly, nonatomic) BOOL tracksAreLibraryOwnedContent;
@property (readonly, nonatomic) BOOL playlistsAreLibraryOwnedContent;
@property (readonly, nonatomic, getter=isPendingMatch) BOOL pendingMatch;
@property (readonly, nonatomic) BOOL isServerImport;
@property (readonly, nonatomic) NSString *syncLibraryID;
@property (readonly, nonatomic, getter=isSuspendable) BOOL suspendable;

- (id)init;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
