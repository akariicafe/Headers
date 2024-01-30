@class PKPaymentRequest, NSString;

@interface PKPaymentRequestViewInterfaceConfiguration : NSObject

@property (retain, nonatomic) PKPaymentRequest *request;
@property (retain, nonatomic) NSString *localizedApplicationName;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *relevantPassUniqueID;

- (void).cxx_destruct;
- (id)init;

@end
