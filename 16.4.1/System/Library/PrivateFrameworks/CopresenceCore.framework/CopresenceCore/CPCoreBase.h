@class NSString, NSXPCInterface;

@interface CPCoreBase : NSObject

@property (class, readonly, nonatomic) NSString *machServiceName;
@property (class, readonly, nonatomic) NSXPCInterface *serverXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *clientXPCInterface;

+ (void)setClassesForClientXPCInterface:(id)a0;
+ (void)setClassesForServerXPCInterface:(id)a0;

@end
