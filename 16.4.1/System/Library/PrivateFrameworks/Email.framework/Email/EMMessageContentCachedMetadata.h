@class NSMutableDictionary;
@protocol EMMessageContentCachedMetadataDelegate;

@interface EMMessageContentCachedMetadata : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didLogCachedMetadataError;
    id<EMMessageContentCachedMetadataDelegate> _delegate;
    NSMutableDictionary *_localCache;
}

@property (nonatomic) BOOL showRemoteImages;
@property (nonatomic) BOOL skipMessageReformatting;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
