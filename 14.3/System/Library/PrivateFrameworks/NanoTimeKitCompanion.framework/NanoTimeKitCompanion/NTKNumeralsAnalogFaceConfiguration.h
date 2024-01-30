@class CLKDevice;

@interface NTKNumeralsAnalogFaceConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long faceColor;
@property (readonly, nonatomic) unsigned long long colorSchemeUnits;
@property (readonly, nonatomic) unsigned long long selectedStyle;
@property (readonly, nonatomic) BOOL areAllComplicationsOff;
@property (readonly, nonatomic) long long utilitySlot;
@property (readonly, nonatomic) CLKDevice *device;

- (void).cxx_destruct;
- (id)initWithFaceColor:(unsigned long long)a0 colorSchemeUnits:(unsigned long long)a1 areAllComplicationsOff:(BOOL)a2 utilitySlot:(long long)a3 selectedStyle:(unsigned long long)a4 forDevice:(id)a5;

@end
