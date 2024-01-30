@interface PUReviewScreenSpec : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long oneUpOptions;
@property (readonly, nonatomic) BOOL allowSendButton;

- (id)initWithOptions:(unsigned long long)a0;

@end
