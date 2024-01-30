@class NSNumber;

@interface CoreMLVersion : NSObject

@property (copy, nonatomic) NSNumber *frameworkVersionNumber;

+ (id)getInternalFrameworkVersion;

- (void).cxx_destruct;
- (id)init;

@end
