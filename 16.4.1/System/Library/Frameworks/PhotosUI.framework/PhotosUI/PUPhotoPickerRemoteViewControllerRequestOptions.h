@class NSUUID, NSString, NSDictionary, NSArray;

@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *requestedIdentifier;
@property (copy, nonatomic) NSString *requestedClassName;
@property (copy, nonatomic) NSDictionary *photoPickerProperties;
@property (readonly, nonatomic) long long modalPresentationStyle;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) unsigned long long savingOptions;
@property (readonly, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) unsigned long long multipleSelectionLimit;
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) BOOL showsFileSizePicker;
@property (readonly, nonatomic) BOOL showsPrompt;
@property (readonly, nonatomic) BOOL convertAutoloopsToGIF;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestedClassName:(id)a0 photoPickerProperties:(id)a1;
- (id)initWithRequestedIdentifier:(id)a0 photoPickerProperties:(id)a1;

@end
