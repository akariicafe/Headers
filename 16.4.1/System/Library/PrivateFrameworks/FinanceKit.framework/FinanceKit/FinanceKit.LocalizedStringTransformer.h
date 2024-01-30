@class NSArray;

@interface FinanceKit.LocalizedStringTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, nonatomic, readonly) NSArray *allowedTopLevelClasses;

- (id)init;

@end
