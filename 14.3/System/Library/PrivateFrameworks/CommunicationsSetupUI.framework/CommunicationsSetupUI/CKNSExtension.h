@interface CKNSExtension : NSObject

@property (retain, nonatomic) id beginMappingID;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions:(id /* block */)a0;

@end
