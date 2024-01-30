@class CKContainerOptions;

@interface CKDAppContainerAccountMetadata : NSObject

@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) long long tokenRegistered;

- (void).cxx_destruct;
- (id)init;

@end
