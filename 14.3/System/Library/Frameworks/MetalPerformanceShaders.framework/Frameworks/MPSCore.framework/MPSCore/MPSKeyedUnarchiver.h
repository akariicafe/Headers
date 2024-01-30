@protocol MTLDevice;

@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {
    id<MTLDevice> _device;
}

+ (id)unarchivedObjectOfClasses:(id)a0 fromData:(id)a1 device:(id)a2 error:(id *)a3;
+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 device:(id)a2 error:(id *)a3;
+ (id)unarchiveObjectWithData:(id)a0 device:(id)a1;
+ (id)unarchiveTopLevelObjectWithData:(id)a0 device:(id)a1 error:(id *)a2;
+ (id)unarchiveObjectWithFile:(id)a0 device:(id)a1;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)mpsMTLDevice;
- (id)initForReadingFromData:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initForReadingWithData:(id)a0 device:(id)a1;

@end
