@class NSString;

@interface ICMusicSubscriptionStatusRemoteRequesting : NSObject

@property (class, readonly, nonatomic) NSString *machServiceName;

+ (id)serviceInterface;
+ (id)clientInterface;

@end
