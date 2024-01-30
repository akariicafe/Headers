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

- (void)encodeWithCoder:(id)a0;
- (void)_cancel;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)_connection;
- (BOOL)_attemptedConnection;
- (void)_connectionBackgroundDownloadPostCompleted:(id)a0;
- (void)_connectionBackgroundDownloadPreCompleted:(id)a0;
- (id)_initWithURLRequest:(id)a0 issue:(id)a1;
- (BOOL)_isDecodingValid;
- (void)_issueWasRemovedFromLibrary;
- (void)_setIssue:(id)a0;
- (id)downloadWithDelegate:(id)a0;
- (void)setIssue:(id)a0;

@end
