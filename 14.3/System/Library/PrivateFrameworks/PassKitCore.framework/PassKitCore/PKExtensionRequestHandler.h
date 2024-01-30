@class NSString, NSExtensionContext, NSExtension;
@protocol NSCopying;

@interface PKExtensionRequestHandler : NSObject <PKInvalidatable> {
    NSExtension *_extension;
    NSExtensionContext *_extensionContext;
    id<NSCopying> _requestIdentifier;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithExtension:(id)a0 extensionRequestOptions:(unsigned long long)a1;
- (void)invalidate;

@end
