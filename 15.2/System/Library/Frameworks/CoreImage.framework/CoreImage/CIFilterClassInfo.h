@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)a0;

- (id)inputKeys;
- (id)initWithClass:(Class)a0;
- (id)description;
- (id)init;
- (id)inputClasses;
- (id)outputKeys;
- (void)dealloc;

@end
