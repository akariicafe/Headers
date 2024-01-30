@interface CNUICoreWhitelistedContactsControllerOptions : NSObject

@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *macOptions;
@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *macOptionsLocal;
@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *iosOptions;

@property (readonly, nonatomic) BOOL shouldPrepopulateEmptyWhitelist;
@property (readonly, nonatomic) BOOL shouldRequireConfirmationOfChanges;

- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)a0 shouldRequireConfirmationOfChanges:(BOOL)a1;

@end
