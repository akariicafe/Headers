@class NSArray, NSString, TIInputMode;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>

@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (readonly, nonatomic) NSArray *userEnabledInputModes;
@property (readonly, nonatomic) NSArray *userPreferredLanguages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inputModesForIdentifiers:(id)a0;


@end
