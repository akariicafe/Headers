@class NSString;

@interface Prediction : NSObject

@property (nonatomic) unsigned long long uiClass;
@property (nonatomic) double confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (retain, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)debugDescription;

@end
