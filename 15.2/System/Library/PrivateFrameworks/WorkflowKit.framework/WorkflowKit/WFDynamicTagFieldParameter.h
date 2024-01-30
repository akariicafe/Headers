@protocol WFDynamicTagFieldDataSource;

@interface WFDynamicTagFieldParameter : WFTagFieldParameter

@property (weak, nonatomic) id<WFDynamicTagFieldDataSource> dataSource;

- (void).cxx_destruct;
- (id)suggestedTags;

@end
