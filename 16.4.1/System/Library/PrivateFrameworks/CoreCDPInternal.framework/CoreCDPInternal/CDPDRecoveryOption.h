@class NSString;

@interface CDPDRecoveryOption : NSObject

@property (copy, nonatomic) NSString *localizedRecoveryOption;
@property (copy, nonatomic) id /* block */ recoveryHandler;
@property (nonatomic) long long recoveryOptionIndex;

- (void).cxx_destruct;

@end
