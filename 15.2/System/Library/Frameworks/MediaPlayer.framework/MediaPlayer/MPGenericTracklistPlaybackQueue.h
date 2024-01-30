@class NSString, NSArray, MPIdentifierSet;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) NSString *firstTrackIdentifier;
@property (readonly, nonatomic) NSArray *trackIdentifiers;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) long long repeatType;
@property (readonly, nonatomic) MPIdentifierSet *collectionIdentifierSet;

+ (BOOL)supportsSecureCoding;

- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
- (BOOL)verifyWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;

@end
