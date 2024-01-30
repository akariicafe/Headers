@class NSString, ICLibraryAuthServiceClientTokenResult;

@interface ICLibraryAuthServiceClientTokenResponse : NSObject <NSCopying>

@property (readonly, nonatomic) int resultCode;
@property (readonly, copy, nonatomic) NSString *serverHostName;
@property (readonly, nonatomic) long long serverInstance;
@property (nonatomic, getter=isSuccess) BOOL success;
@property (readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenResult *tokenResult;

- (id)initWithResponseDictionary:(id)a0;
- (id)initWithResultCode:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
