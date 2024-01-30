@class NSString, NSDictionary;

@interface ICAddToWishListResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSString *message;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
