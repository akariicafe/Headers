@class AVTCoreModelPickerOptions, NSOrderedSet, NSString, AVTCoreModelPairing;

@interface AVTCoreModelPresetsPicker : NSObject <AVTCoreModelPicker>

@property (readonly, copy, nonatomic) NSOrderedSet *representedTags;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) AVTCoreModelPickerOptions *options;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
