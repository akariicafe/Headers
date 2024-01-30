@class NSDictionary;

@interface PLProcessNetworkSource : NSObject

@property (copy, nonatomic) NSDictionary *descriptionDictionary;
@property (copy, nonatomic) NSDictionary *countsDictionary;
@property (nonatomic) struct __NStatSource { } *source;

- (id)initWithSource:(struct __NStatSource { } *)a0;
- (void).cxx_destruct;

@end
