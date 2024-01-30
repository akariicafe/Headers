@interface MKHTTPContentRange : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) long long length;
@property (nonatomic) long long total;

- (id)initWithHeaderValue:(id)a0;

@end
