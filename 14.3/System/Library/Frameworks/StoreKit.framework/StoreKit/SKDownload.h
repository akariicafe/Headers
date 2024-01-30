@class NSString, NSURL, NSError, NSNumber, SKPaymentTransaction;

@interface SKDownload : NSObject {
    id _internal;
}

@property (copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long downloadState;
@property (readonly, nonatomic) long long contentLength;
@property (readonly, nonatomic) long long expectedContentLength;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) double timeRemaining;
@property (readonly, nonatomic) SKPaymentTransaction *transaction;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)_setVersion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setTransaction:(id)a0;
- (void)_setError:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setContentIdentifier:(id)a0;
- (void)_setProgress:(float)a0;
- (void)_setContentLength:(id)a0;
- (void)_setContentURL:(id)a0;
- (void)_setDownloadState:(long long)a0;
- (void)_setTimeRemaining:(double)a0;
- (void)_applyChangeset:(id)a0;

@end
