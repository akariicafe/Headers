@class NSSet, UIBezierPath;

@interface PKDetectionQueryItem : NSObject

@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) UIBezierPath *baselinePath;

@end
