@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject

@property (readonly, nonatomic) CMFitnessMachineInternal *_internal;

+ (BOOL)isAvailable;

- (void)dealloc;
- (id)init;
- (void)feedFitnessMachineData:(id)a0;

@end
