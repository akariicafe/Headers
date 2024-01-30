@interface Gestalt : NSObject

@property (class, readonly, nonatomic) BOOL internalInstall;
@property (class, readonly, nonatomic) BOOL hasAppleNeuralEngine;

+ (id)stringAnswerToQuestion:(const struct __CFString { } *)a0;
+ (BOOL)jasperAvailable;

@end
