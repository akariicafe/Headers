@class NSString, NSURL, _LTLocalePair;

@interface _LTTranslationFeedback : NSObject <_LTLoggingRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSString *sourceContentAsJSON;
@property (copy, nonatomic) NSString *targetContentAsJSON;
@property (copy, nonatomic) NSString *errorsAsJSON;
@property (copy, nonatomic) NSString *safariVersion;
@property (copy, nonatomic) NSURL *webpageURL;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
