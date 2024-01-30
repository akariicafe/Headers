@class NSString, UIColor, HUNewUserEducationFlowLayoutModel;

@interface HUNewUserEducationCollectionViewModel : NSObject

@property (class, readonly, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double decelerationRate;
@property (readonly, nonatomic) HUNewUserEducationFlowLayoutModel *layoutModel;
@property (readonly, nonatomic) long long numberOfItemsInSection;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator;

- (void).cxx_destruct;
- (id)init;

@end
