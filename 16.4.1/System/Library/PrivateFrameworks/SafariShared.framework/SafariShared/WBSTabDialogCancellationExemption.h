@interface WBSTabDialogCancellationExemption : NSObject {
    id /* block */ _cancellationExemptionHandler;
}

+ (id)committedNavigationExemption;
+ (id)provisionalNavigationExemption;
+ (id)sameOriginNavigationExemption:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCancellationHandler:(id /* block */)a0;
- (BOOL)isExemptFromCancellationInContext:(id)a0;

@end
