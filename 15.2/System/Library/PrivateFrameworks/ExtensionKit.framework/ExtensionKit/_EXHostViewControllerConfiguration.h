@class NSString;
@protocol _EXExtensionRepresenting;

@interface _EXHostViewControllerConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) NSString *sceneIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
