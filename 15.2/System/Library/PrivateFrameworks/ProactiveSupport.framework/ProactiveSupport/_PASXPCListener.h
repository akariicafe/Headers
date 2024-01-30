@class NSString;
@protocol NSXPCListenerDelegate;

@interface _PASXPCListener : NSObject

@property (readonly, nonatomic) id<NSXPCListenerDelegate> delegate;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 serviceName:(id)a1 displayName:(id)a2;

@end
