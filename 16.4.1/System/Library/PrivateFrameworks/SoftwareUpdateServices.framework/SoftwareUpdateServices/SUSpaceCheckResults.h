@interface SUSpaceCheckResults : NSObject

@property (nonatomic) BOOL hasSufficientFreeSpace;
@property (nonatomic) BOOL needsCacheDelete;
@property (nonatomic) BOOL needsAppOffload;
@property (nonatomic) unsigned long long additionalBytesRequired;

- (id)init;

@end
