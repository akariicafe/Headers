@interface CBSystemHealthBluetooth : NSObject

@property (nonatomic) unsigned long long componentType;

- (id)init;
- (unsigned long long)getComponentStatusWithError:(id *)a0;
- (id)initWithComponentType:(unsigned long long)a0;

@end
