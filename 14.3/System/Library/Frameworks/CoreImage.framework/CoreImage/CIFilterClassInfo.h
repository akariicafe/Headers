@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)a0;

- (id)init;
- (id)inputKeys;
- (void)dealloc;
- (id)outputKeys;
- (id)description;
- (id)inputClasses;
- (id)initWithClass:(Class)a0;

@end
