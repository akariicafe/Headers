@class NSString, NSDate;

@interface OSLogEntry : NSObject

@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long storeCategory;

- (void).cxx_destruct;
- (id)initWithEventProxy:(id)a0;

@end
