@class ML3MusicLibrary, NSString, NSObject, MPMediaLibraryArtwork, NSNumber, ICUserIdentity;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryArtworkRequest : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    unsigned long long _mediaType;
    BOOL _hasRetrievedTokens;
}

@property (readonly, copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (readonly, nonatomic) long long artworkType;
@property (readonly, nonatomic) unsigned long long libraryID;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic) double retrievalTime;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *availableArtworkToken;
@property (copy, nonatomic) NSString *fetchableArtworkToken;
@property (copy, nonatomic) NSNumber *fetchableArtworkSource;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 identifier:(unsigned long long)a1 entityType:(long long)a2 artworkType:(long long)a3;
- (id)initWithLibrary:(id)a0 identifier:(unsigned long long)a1 entityType:(long long)a2 artworkType:(long long)a3 mediaType:(unsigned long long)a4;
- (id)initWithIdentifier:(unsigned long long)a0 entityType:(long long)a1 artworkType:(long long)a2;
- (id)initWithML3Library:(id)a0 identifier:(unsigned long long)a1 entityType:(long long)a2 artworkType:(long long)a3;
- (void)setLibraryArtwork:(id)a0;
- (void)clearFailedFetchableToken;
- (void)_onQueue_updateTokens;
- (void)promoteFetchableArtworkTokenIfNeeded;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
