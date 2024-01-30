@class CKContextClient;

@interface SmartReplies.SRSmartRepliesCaptioner : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextClient;
}

@property (nonatomic, retain) CKContextClient *contextClient;

- (id)init;
- (void).cxx_destruct;
- (void)captionsWithContactDetail:(id)a0 onComplete:(id /* block */)a1;
- (void)captionsWithImage:(struct CGImage { } *)a0 onComplete:(id /* block */)a1;
- (void)captionsWithText:(id)a0 onComplete:(id /* block */)a1;
- (id)inferredContactsIn:(id)a0;

@end
