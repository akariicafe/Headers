@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
}

@property (readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (retain, nonatomic) id contextObject;

+ (id)noneVibrationPattern;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)a0;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)a0 pauseDuration:(double)a1;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)a0;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithPropertyListRepresentation:(id)a0 skipValidation:(BOOL)a1;
- (double)_computedDuration;
- (void)appendVibrationComponentWithDuration:(double)a0 isPause:(BOOL)a1;

@end
