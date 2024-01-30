@class NSString, NSData, NSFileHandle, NSObject;
@protocol OS_tcc_identity;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *libraryPath;
@property (readonly, nonatomic) NSData *trackData;
@property (readonly, nonatomic) NSData *playlistData;
@property (readonly, nonatomic) NSData *artistData;
@property (readonly, nonatomic) NSData *albumData;
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
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2 artistData:(id)a3 albumData:(id)a4 clientIdentity:(id)a5;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2 clientIdentity:(id)a3;

@end
