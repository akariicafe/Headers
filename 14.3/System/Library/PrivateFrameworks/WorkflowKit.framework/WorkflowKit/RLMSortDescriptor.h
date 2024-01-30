@class NSString;

@interface RLMSortDescriptor : NSObject

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) BOOL ascending;

+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(BOOL)a1;

- (void).cxx_destruct;
- (id)reversedSortDescriptor;

@end
