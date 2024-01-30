@class NSString;

@interface FigMetalBufferDescriptor : NSObject

@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)init;

@end
