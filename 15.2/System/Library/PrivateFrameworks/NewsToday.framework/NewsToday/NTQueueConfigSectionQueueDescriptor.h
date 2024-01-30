@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor>

@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) unsigned long long visibleSectionConfigsLimit;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueueConfig:(id)a0 appConfiguration:(id)a1 todayData:(id)a2 inFavoritesOnlyMode:(BOOL)a3 respectsWidgetVisibleSectionsLimit:(BOOL)a4;

@end
