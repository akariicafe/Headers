@class NSString, ACAccount;

@interface AAMyPhotoRequest : AARequest {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *serverCacheTag;
@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
