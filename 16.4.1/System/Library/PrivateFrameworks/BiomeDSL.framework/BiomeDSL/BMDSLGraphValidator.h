@class NSSet;

@interface BMDSLGraphValidator : NSObject

@property (class, readonly) NSSet *genericValidKeyPaths;
@property (class, readonly) NSSet *legacyValidKeyPaths;

@property (readonly, nonatomic) BOOL passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;

+ (id)currentProcessValidator;
+ (void)setCurrentProcessValidator:(id)a0;
+ (id)passthroughValidator;

- (id)initWithValidKeyPaths:(id)a0 allowedOperations:(id)a1 allowedStreamTypes:(id)a2;
- (BOOL)isStreamTypeAllowed:(unsigned long long)a0;
- (id)init;
- (BOOL)isExecutionAllowedForGraph:(id)a0;
- (void).cxx_destruct;

@end
