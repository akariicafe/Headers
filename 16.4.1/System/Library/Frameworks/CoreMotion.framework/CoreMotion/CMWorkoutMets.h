@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject

@property (readonly, nonatomic) CMWorkoutMetsInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)queryWorkoutMetsWithSessionId:(id)a0 handler:(id /* block */)a1;

@end
