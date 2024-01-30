@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSNumber *cardTypeCode;
@property (copy, nonatomic) NSString *currentStatus;
@property (nonatomic) BOOL supportsInApp;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
