@class NSXPCInterface;

@interface BLServiceInterface : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *mainInterface;
@property (class, readonly, nonatomic) NSXPCInterface *progressInterface;

@end
