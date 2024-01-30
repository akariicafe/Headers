@class NSBundle;
@protocol TSUResourceFileURLProvider;

@interface TSPResourceLocationProvider : NSObject

@property (class, retain, nonatomic) NSBundle *alternateBundle;
@property (class, weak, nonatomic) id<TSUResourceFileURLProvider> documentResourceAlternateFileURLProvider;
@property (class, readonly, nonatomic) NSBundle *bundle;

@end
