@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)classInfoForClass:(Class)a0;

- (id)initWithClass:(Class)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)inputKeys;
- (id)inputClasses;
- (id)outputKeys;

@end
