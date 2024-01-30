@interface SXCollectionRowLayout : NSObject

@property (nonatomic) unsigned long long intendedComponentsPerRow;
@property (nonatomic) unsigned long long componentsPerRow;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double componentWidth;
@property (nonatomic) double spaceBetweenComponents;

- (id)description;

@end
