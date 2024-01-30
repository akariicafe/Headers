@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
}

@property (readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (retain, nonatomic) id contextObject;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)a0;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)a0;
+ (id)noneVibrationPattern;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)a0 pauseDuration:(double)a1;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_computedDuration;
- (id)_initWithPropertyListRepresentation:(id)a0 skipValidation:(BOOL)a1;
- (void)appendVibrationComponentWithDuration:(double)a0 isPause:(BOOL)a1;

@end
