@class NSString;

@interface DATransaction : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *transactionId;

- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
