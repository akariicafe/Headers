@class NSURL, NSString;

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding> {
    NSString *_expiredCertificateDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *failingURL;
@property (readonly, nonatomic) long long warningCategory;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) long long numberOfDaysInvalid;
@property (readonly, nonatomic) NSString *expiredCerticateDescription;
@property (readonly, nonatomic) double clockSkew;

+ (BOOL)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust { } *)a0;
+ (id)permanentAcceptanceConfirmationTitle;
+ (id)permanentAcceptanceConfirmationDescription;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (long long)certificateWarningCategoryForError:(id)a0 trustIncludesRevokedCertificate:(BOOL)a1 clockSkew:(double)a2;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithWarningCategory:(long long)a0 failingURL:(id)a1 numberOfDaysInvalid:(long long)a2 canGoBack:(BOOL)a3 clockSkew:(double)a4;
- (id)initLegacyTLSWarningWithFailingURL:(id)a0 canGoBack:(BOOL)a1;

@end
