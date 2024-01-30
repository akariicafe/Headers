@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject

@property (readonly, nonatomic) CMFitnessMachineInternal *_internal;

+ (BOOL)isAvailable;

- (void)feedFitnessMachineData:(id)a0;
- (id)init;
- (void)dealloc;

@end
