@class NSArray;

@interface DMFTaskRequest : CATTaskRequest

@property (class, readonly, copy, nonatomic) NSArray *permittedPlatforms;
@property (class, readonly, nonatomic) BOOL isPermittedOnCurrentPlatform;
@property (class, readonly, nonatomic) BOOL isPermittedOnSystemConnection;
@property (class, readonly, nonatomic) BOOL isPermittedOnUserConnection;

+ (BOOL)isPermittedOnPlatform:(unsigned long long)a0;

@end
