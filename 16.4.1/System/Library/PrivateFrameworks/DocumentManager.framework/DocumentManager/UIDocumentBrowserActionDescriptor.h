@class NSString, NSPredicate;

@interface UIDocumentBrowserActionDescriptor : NSObject

@property (readonly, nonatomic) NSString *uiActionProviderIdentifier;
@property (readonly, nonatomic) NSString *fileProviderIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL displayInline;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5;

@end
