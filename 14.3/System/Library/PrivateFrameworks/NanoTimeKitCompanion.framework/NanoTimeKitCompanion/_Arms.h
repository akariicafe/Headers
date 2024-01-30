@class NSArray, NSNumber;

@interface _Arms : _Geometry

@property (retain, nonatomic) NSArray *texHandMnut;
@property (retain, nonatomic) NSNumber *texHandHour;
@property (retain, nonatomic) NSNumber *texArm;
@property (nonatomic) unsigned long long mtlBufHandOffset;
@property (nonatomic) unsigned long long mtlBufArmOffset;
@property (nonatomic) float leftShoulderX;
@property (nonatomic) float rightShoulderX;
@property (nonatomic) float leftShoulderAdjustment;
@property (nonatomic) float rightShoulderAdjustment;
@property (nonatomic) float curLeftBend;
@property (nonatomic) float curRightBend;

- (void).cxx_destruct;

@end
