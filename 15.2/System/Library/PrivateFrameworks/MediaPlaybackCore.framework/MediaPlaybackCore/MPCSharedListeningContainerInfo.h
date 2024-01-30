@class NSString, MPModelGenericObject;

@interface MPCSharedListeningContainerInfo : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) MPModelGenericObject *modelObject;
@property (copy, nonatomic) NSString *featureName;

- (void).cxx_destruct;

@end
