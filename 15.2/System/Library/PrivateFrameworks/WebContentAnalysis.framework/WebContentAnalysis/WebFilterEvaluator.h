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

- (void)encodeWithCoder:(id)a0;
- (id)addData:(id)a0;
- (void)unblockWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (int)filterState;
- (id)dataComplete;
- (void)dealloc;
- (id)initWithResponse:(id)a0;
- (void)userDidCancel;
- (void)userEnteredCorrectPIN;
- (id)debugPageForPageWithData:(id)a0 forURL:(id)a1 debugString:(id)a2;
- (id)blockPageForPageWithTitle:(id)a0 origURL:(id)a1;
- (BOOL)wasBlocked;
- (void)attemptUnblockWithCompletion:(id /* block */)a0;

@end
