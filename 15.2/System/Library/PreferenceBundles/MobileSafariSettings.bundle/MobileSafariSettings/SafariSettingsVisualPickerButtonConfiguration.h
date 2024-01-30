@class NSDictionary, NSString, NSNumber;

@interface SafariSettingsVisualPickerButtonConfiguration : NSObject

@property (readonly, copy, nonatomic) NSDictionary *_dictionaryRepresentation;
@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSNumber *preferenceValue;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 imageName:(id)a1 preferenceValue:(id)a2;

@end
