@class NSArray;

@interface _UICollectionCompositionalLayoutSolverOptions : NSObject

@property (nonatomic) double interSectionSpacing;
@property (retain, nonatomic) Class layoutAttributesClass;
@property (retain, nonatomic) Class invalidationContextClass;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) BOOL roundsToScreenScale;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSArray *globalSupplementaryItems;
@property (copy, nonatomic) id /* block */ decorationRegistrationHandler;

+ (id)defaultOptions;

- (void).cxx_destruct;

@end
