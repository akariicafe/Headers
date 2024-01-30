@class NSString, AVPlayerLoggingIdentifierInternal;

@interface AVPlayerLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    AVPlayerLoggingIdentifierInternal *_priv;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;

@end
