@interface NewsArticles.MailPresenter : NSObject <MFMailComposeViewControllerDelegate, SXMailPresenter> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ viewControllerPresenting;
}

- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canComposeMail;
- (void)presentMail:(id)a0;

@end
