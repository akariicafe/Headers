@class NSArray, NSString;

@interface RCGroupCancelHandler : NSObject <RCOperationCanceling>

@property (copy, nonatomic) NSArray *cancelHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupCancelHandlerWithCancelHandlers:(id)a0;

- (id)initWithCancelHandlers:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
