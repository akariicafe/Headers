@class NSString;

@interface RLMSortDescriptor : NSObject

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) BOOL ascending;

+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(BOOL)a1;

- (id)reversedSortDescriptor;
- (void).cxx_destruct;

@end
