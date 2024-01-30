@class NSString, NSDictionary, DIAttribute;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupField : NSObject

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL populateFromMeCard;
@property (retain, nonatomic) DIAttribute *attribute;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) id<NSObject, NSCopying> currentValue;
@property (copy, nonatomic) id<NSObject, NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture;

+ (id)paymentSetupFieldWithIdentifier:(id)a0 configuration:(id)a1;
+ (Class)classForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0;
+ (id)paymentSetupFieldWithDIAttribute:(id)a0;
+ (id)newRandomlyGeneratedField;
+ (id)sampleCustomPaymentSetupFields;

- (void)updateWithConfiguration:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)displayString;
- (void)updateWithAttribute:(id)a0;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (void)_setLocalizedDisplayName:(id)a0;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypeText;
- (BOOL)isFieldTypeDate;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypePicker;
- (id)_submissionStringForValue:(id)a0;
- (void)noteCurrentValueChanged;
- (id)textFieldObject;
- (id)dateFieldObject;
- (id)labelFieldObject;
- (id)footerFieldObject;
- (id)pickerFieldObject;
- (id)submissionString;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)submissionStringMeetsAllRequirements;

@end
