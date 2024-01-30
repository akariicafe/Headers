@class NSString, NSURL, NSNumber;

@interface MPServerObjectDatabaseHLSAsset : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *hashedPersonID;
@property (readonly, copy, nonatomic) NSURL *playlistURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSNumber *keyServerAdamID;
@property (readonly, copy, nonatomic) NSString *keyServerProtocolType;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 hashedPersonID:(id)a1 playlistURL:(id)a2 keyCertificateURL:(id)a3 keyServerURL:(id)a4 keyServerAdamID:(id)a5 keyServerProtocolType:(id)a6 isiTunesStoreStream:(BOOL)a7;
- (id)initWithSQLRowResult:(id)a0;

@end
