@class NSString, NSData, _NMRNowPlayingApplicationStateProtobuf;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRNowPlayingApplicationStateProtobuf *_protobuf;
    int _processID;
}

@property (copy, nonatomic) NSString *companionBundleIdentifier;
@property (copy, nonatomic) NSString *watchBundleIdentifier;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (copy, nonatomic) NSData *iconDigest;
@property (nonatomic) int processID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)_getNextPlaceholderProcessID;

@end
