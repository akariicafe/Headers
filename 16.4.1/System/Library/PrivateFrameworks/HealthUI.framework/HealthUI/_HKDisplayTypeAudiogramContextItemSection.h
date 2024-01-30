@class NSString, NSArray, UIAction;

@interface _HKDisplayTypeAudiogramContextItemSection : NSObject <HKDisplayTypeContextItemSection>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UIAction *accessoryButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
