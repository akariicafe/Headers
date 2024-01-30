@interface CBSystemHealthBluetooth : NSObject

@property (nonatomic) unsigned long long componentType;

- (id)init;
- (id)initWithComponentType:(unsigned long long)a0;
- (unsigned long long)getComponentStatusWithError:(id *)a0;

@end
