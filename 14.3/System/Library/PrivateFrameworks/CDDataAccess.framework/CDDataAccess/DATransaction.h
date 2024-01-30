@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLabel:(id)a0;

@end
