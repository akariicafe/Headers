@class NSString, CDPDFollowUpFactory, FLFollowUpController;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener> {
    FLFollowUpController *_followUpController;
    CDPDFollowUpFactory *_followUpFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)securityLevelChanged:(BOOL)a0;
- (id)informativeText;
- (id)_followUpControllerForContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)postFollowUpItemForContext:(id)a0 error:(id *)a1;

@end
