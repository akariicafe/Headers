@class NSDictionary;

@interface PLProcessNetworkSource : NSObject

@property (copy, nonatomic) NSDictionary *descriptionDictionary;
@property (copy, nonatomic) NSDictionary *countsDictionary;
@property (nonatomic) struct __NStatSource { } *source;

- (void).cxx_destruct;
- (id)initWithSource:(struct __NStatSource { } *)a0;

@end
