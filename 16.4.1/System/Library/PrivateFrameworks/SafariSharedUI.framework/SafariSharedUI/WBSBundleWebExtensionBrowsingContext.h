@class WKBrowsingContextHandle, NSNumber;

@interface WBSBundleWebExtensionBrowsingContext : NSObject

@property (readonly, nonatomic) WKBrowsingContextHandle *browsingContextHandle;
@property (readonly, nonatomic) NSNumber *tabID;
@property (readonly, nonatomic) NSNumber *windowID;

- (void).cxx_destruct;
- (id)initWithBrowingContextHandle:(id)a0 tabID:(id)a1 windowID:(id)a2;

@end
