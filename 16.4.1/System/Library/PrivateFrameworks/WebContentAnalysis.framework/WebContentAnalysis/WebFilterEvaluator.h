@class WFRemotePINEntryViewController, NSString, NSURL, NSMutableData;

@interface WebFilterEvaluator : NSObject <WFPINEntryViewControllerProtocol, NSSecureCoding> {
    unsigned long long _filterState;
    NSURL *_url;
    NSString *_pageTitle;
    NSMutableData *_buffer;
    id /* block */ _completion;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFRemotePINEntryViewController *remoteViewController;

+ (BOOL)isManagedSession;
+ (id)createWithResponse:(id)a0;
+ (id)sharedBloomFilter;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResponse:(id)a0;
- (void)dealloc;
- (id)addData:(id)a0;
- (int)filterState;
- (id)dataComplete;
- (void)unblockWithCompletion:(id /* block */)a0;
- (void)userDidCancel;
- (void)attemptUnblockWithCompletion:(id /* block */)a0;
- (id)blockPageForPageWithTitle:(id)a0 origURL:(id)a1;
- (id)debugPageForPageWithData:(id)a0 forURL:(id)a1 debugString:(id)a2;
- (void)userEnteredCorrectPIN;
- (BOOL)wasBlocked;

@end
