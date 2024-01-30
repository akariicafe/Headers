@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject

@property (readonly, nonatomic) CMWorkoutMetsInternal *_internal;

+ (BOOL)isAvailable;

- (void)queryWorkoutMetsWithSessionId:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
