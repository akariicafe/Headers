@class NSNumber;

@interface AMSBiometricsTokenUpdateTaskShim : NSObject

@property (retain, nonatomic) NSNumber *accountIdentifier;

- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)runUpdateWithCompletionBlock:(id /* block */)a0;

@end
