@class NSString, NSUUID, FLExtensionContext, NSExtension;
@protocol FLExtensionHostContextInterface;

@interface FLHeadlessExtensionLoader : NSObject {
    FLExtensionContext *_extensionContext;
    id<FLExtensionHostContextInterface> _delegate;
    NSExtension *_extension;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) id /* block */ requestInterruptionBlock;

+ (id)sharedExtensionQueue;

- (id)initWithIdentifier:(id)a0;
- (id)remoteInterface;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_loadExtensionForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_loadExtension:(id *)a0;
- (BOOL)_setupSessionIfNeeded:(id *)a0;
- (id)_hostContextForExtension:(id)a0;
- (void)_terminate;
- (id)initWithFollowUp:(id)a0 andDelegate:(id)a1;

@end
