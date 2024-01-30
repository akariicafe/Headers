@class NSString, SKUIStoreIdentifier;

@interface SKUIBuyButtonDescriptor : NSObject

@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *confirmationText;
@property (nonatomic) unsigned long long elementType;
@property (retain, nonatomic) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic) long long itemIdentifier;
@property (retain, nonatomic) NSString *variantIdentifier;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL showingConfirmation;
@property (nonatomic) long long progressType;
@property (nonatomic) BOOL showsUniversal;
@property (nonatomic) BOOL shouldSuppressEnabled;
@property (nonatomic) BOOL shouldSuppressCloudRestore;

- (void).cxx_destruct;
- (BOOL)canPerformLocalActionWithItemState:(id)a0;
- (BOOL)canPersonalizeUsingItemState:(id)a0;

@end
