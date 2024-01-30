@class NSString, NSURL, NSError, AMSPromise;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (copy) NSURL *privacyPolicyURL;
@property (copy) NSError *error;
@property (retain) AMSPromise *outstandingPromise;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0;
- (void)start;
- (id)debugDescription;
- (void)_performLookup;

@end
