@class NSArray, NSString;

@interface FCGroupCancelHandler : NSObject <FCOperationCanceling>

@property (copy, nonatomic) NSArray *cancelHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupCancelHandlerWithCancelHandlers:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCancelHandlers:(id)a0;

@end
