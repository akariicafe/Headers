@interface FCMultiStepFetchOperationStep : NSObject

@property (nonatomic) SEL fetchSelector;
@property (nonatomic) BOOL isCritical;

@end
