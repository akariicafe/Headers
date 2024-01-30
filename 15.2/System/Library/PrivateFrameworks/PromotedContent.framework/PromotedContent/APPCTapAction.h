@interface APPCTapAction : NSObject <APPCPromotableTapAction>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionType;

+ (id)actionFor:(id)a0;

- (id)init;
- (id)initWithActionType:(long long)a0;
- (void)performActionWithCompletion:(id /* block */)a0;

@end
