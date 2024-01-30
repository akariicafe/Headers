@class NSString, NSXPCInterface;

@interface SPRServiceXPC : NSObject

@property (class, readonly, copy, nonatomic) NSString *machServiceName;
@property (class, readonly, nonatomic) NSXPCInterface *interface;

@end
