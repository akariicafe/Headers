@class NSMapTable;

@interface _MFMessageURLProtocolRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMapTable *storage;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)init;
- (void)registerContentRepresentation:(id)a0;
- (id)contentRepresentationForURL:(id)a0;

@end
