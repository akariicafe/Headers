@class NSError, NSArray;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPServerObjectDatabaseImportResult : NSObject

@property (readonly, nonatomic) id annotatedPayload;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustID;
@property (readonly, nonatomic) NSArray *playableAssetIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnnotatedPayload:(id *)a0 playableAssetIdentifiers:(id)a1 trustID:(id)a2 error:(id)a3;

@end
