@class NSString;
@protocol PXStorySongResource, PXStoryAutoEditDecisionList;

@interface _PXStoryFallbackStyleDescriptor : NSObject <PXStoryStyleDescriptor>

@property (class, readonly) _PXStoryFallbackStyleDescriptor *defaultFallbackStyleDescriptor;

@property (readonly, nonatomic) NSString *originalColorGradeCategory;
@property (readonly, nonatomic) long long customColorGradeKind;
@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (readonly, nonatomic) id<PXStoryAutoEditDecisionList> autoEditDecisionList;
@property (readonly, nonatomic) BOOL isCustomized;
@property (readonly, nonatomic) unsigned long long hash;


@end
