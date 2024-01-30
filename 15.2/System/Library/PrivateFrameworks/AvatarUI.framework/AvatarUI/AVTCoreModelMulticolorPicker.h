@class AVTCoreModelPickerOptions, NSArray, NSDictionary, NSString, AVTCoreModelPairing, AVTCoreModelMulticolorAuxiliaryPicker;

@interface AVTCoreModelMulticolorPicker : NSObject <AVTCoreModelPicker>

@property (readonly, nonatomic) AVTCoreModelMulticolorAuxiliaryPicker *auxiliaryPicker;
@property (readonly, nonatomic) NSArray *subpickers;
@property (readonly, nonatomic) NSArray *subtitles;
@property (readonly, nonatomic) NSDictionary *nestedPresetPickers;
@property (readonly, nonatomic) long long initialState;
@property (readonly, nonatomic) BOOL allowsRemoval;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) AVTCoreModelPickerOptions *options;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
