@class NSString;

@interface FigMetalBufferDescriptor : NSObject

@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long options;

- (id)init;
- (void).cxx_destruct;
- (void)initFromDescriptor:(id)a0;

@end
