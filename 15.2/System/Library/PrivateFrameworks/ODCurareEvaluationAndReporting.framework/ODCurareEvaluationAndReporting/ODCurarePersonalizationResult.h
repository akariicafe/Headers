@class NSURL, NSString, NSDictionary;

@interface ODCurarePersonalizationResult : NSObject

@property (retain, nonatomic) NSURL *personalizedModelPath;
@property (retain, nonatomic) NSURL *currentlyUsedModelPath;
@property (nonatomic) BOOL newPersonalizedModelIsSelected;
@property (nonatomic) BOOL saveNewPersonalizedModel;
@property (retain, nonatomic) NSString *personalizedModelIdentifier;
@property (retain, nonatomic) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)initWithNewPersonalizedModelPath:(id)a0 currentlyUsedModelPath:(id)a1 isSelected:(BOOL)a2 saveModel:(BOOL)a3 newPersonalizedModelIdentifier:(id)a4;

@end
