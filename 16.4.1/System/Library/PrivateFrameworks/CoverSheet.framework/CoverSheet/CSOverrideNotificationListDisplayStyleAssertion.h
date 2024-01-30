@class NSString;

@interface CSOverrideNotificationListDisplayStyleAssertion : NSObject <BSInvalidatable, BSCancellable>

@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) BOOL hideNotificationCount;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithNotificationListDisplayStyle:(unsigned long long)a0 hideNotificationCount:(BOOL)a1 reason:(id)a2 invalidationHandler:(id /* block */)a3;

@end
