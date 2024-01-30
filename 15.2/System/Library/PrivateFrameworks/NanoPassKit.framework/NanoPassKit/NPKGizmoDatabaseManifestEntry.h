@class NSString, NSArray;

@interface NPKGizmoDatabaseManifestEntry : NSObject

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSArray *localManifestHashes;
@property (retain, nonatomic) NSArray *remoteManifestHashes;

- (id)description;
- (void).cxx_destruct;

@end
