@class NSString, NKIssue, NSData, NSDictionary, NSURLRequest, NSURLConnection;

@interface NKAssetDownload : NSObject <NSSecureCoding> {
    BOOL _isDecodingValid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *identifier;
@property (copy) NSURLRequest *URLRequest;
@property (retain) NSData *userInfoData;
@property (retain) NSURLConnection *connection;
@property BOOL attemptedConnection;
@property (readonly, weak) NKIssue *issue;
@property (copy) NSDictionary *userInfo;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_connection;
- (void)_cancel;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_attemptedConnection;
- (BOOL)_isDecodingValid;
- (void)_issueWasRemovedFromLibrary;
- (void)_setIssue:(id)a0;
- (id)_initWithURLRequest:(id)a0 issue:(id)a1;
- (void)setIssue:(id)a0;
- (void)_connectionBackgroundDownloadPreCompleted:(id)a0;
- (void)_connectionBackgroundDownloadPostCompleted:(id)a0;
- (id)downloadWithDelegate:(id)a0;

@end
