@class NSArray;
@protocol NFCopying;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation

@property (copy, nonatomic) NSArray *resultTodayModuleDescriptors;
@property (copy, nonatomic) id<NFCopying> prefetchedContent;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)_continueOperationWithTodayData:(id)a0;

@end
