@class NSMutableArray, DEExtensionManager;

@interface DiagnosticExtensionCaller : NSObject {
    DEExtensionManager *_manager;
    NSMutableArray *_liveDEs;
}

+ (id)sharedInstance;
+ (BOOL)getAttachmentsFrom:(id)a0 forBundleID:(id)a1 withParameters:(id)a2 queue:(id)a3 reply:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (id)_getDEExtensionWithIdentifier:(id)a0;
- (BOOL)_getAttachmentsFrom:(id)a0 forBundleID:(id)a1 withParameters:(id)a2 queue:(id)a3 reply:(id /* block */)a4;

@end
