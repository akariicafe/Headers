@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)initWithLabel:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
