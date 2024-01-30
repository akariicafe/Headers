@interface QuarantineFileHandler : NSObject

@property (readonly, nonatomic) BOOL isQuarantined;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)applyMountPointsWithBSDName:(id)a0 error:(id *)a1;

@end
