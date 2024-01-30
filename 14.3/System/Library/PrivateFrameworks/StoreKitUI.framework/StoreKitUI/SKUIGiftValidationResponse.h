@class NSString;

@interface SKUIGiftValidationResponse : NSObject

@property (readonly, nonatomic) NSString *errorString;
@property (readonly, nonatomic) NSString *giftKey;
@property (readonly, nonatomic) NSString *totalGiftAmountString;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)initWithValidationDictionary:(id)a0;

@end
