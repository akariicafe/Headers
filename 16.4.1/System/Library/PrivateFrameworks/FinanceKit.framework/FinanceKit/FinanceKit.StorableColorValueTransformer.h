@class NSArray;

@interface FinanceKit.StorableColorValueTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, nonatomic, readonly) NSArray *allowedTopLevelClasses;

- (id)init;

@end
