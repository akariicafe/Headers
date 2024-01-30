@class __IMDBackwardCompatibilityMessageIdentifier;

@interface IMDBackwardCompatibilityMessageIdentifier : NSObject

@property (class, readonly, nonatomic) IMDBackwardCompatibilityMessageIdentifier *sharedIdentifier;

@property (retain, nonatomic) __IMDBackwardCompatibilityMessageIdentifier *swiftImplementation;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isIgnorableBackwardCompatibilityMessage:(id)a0 inChat:(id)a1;

@end
