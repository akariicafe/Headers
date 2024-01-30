@class NSNumber;

@interface ISDefaults : NSObject

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) BOOL usePerstentCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)usePerstentCache;

@end
