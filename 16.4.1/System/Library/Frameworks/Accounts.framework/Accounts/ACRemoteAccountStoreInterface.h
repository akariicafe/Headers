@class NSXPCInterface;

@interface ACRemoteAccountStoreInterface : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *XPCInterface;

+ (id)_buildXPCInterface;

@end
