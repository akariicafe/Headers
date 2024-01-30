@class NSString, CLKDevice;

@interface NTKEditOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long swatchStyle;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameForAction;

+ (struct CGSize { double x0; double x1; })sizeForSwatchStyle:(long long)a0;
+ (id)optionsDescription;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)JSONObjectRepresentation;
- (BOOL)isValidOption;
- (BOOL)optionExistsInDevice:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;

@end
