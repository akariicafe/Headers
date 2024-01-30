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

- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isAsynchronous;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (id)debugDescription;
- (void)_performLookup;

@end
