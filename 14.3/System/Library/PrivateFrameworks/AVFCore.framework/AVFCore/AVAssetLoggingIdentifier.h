@class NSString, AVAssetLoggingIdentifierInternal;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    AVAssetLoggingIdentifierInternal *_priv;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
