@interface _PKFakeTapToFocusInfo : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long interactionValue;
@property (readonly, nonatomic) unsigned long long firstSubviewValue;
@property (readonly, nonatomic) unsigned long long targetValue;
@property (readonly, nonatomic) unsigned long long actionValue;
@property (nonatomic) unsigned long long controlEvents;
@property (readonly, nonatomic) unsigned long long textInputValue;
@property (readonly, nonatomic) BOOL shouldWaitForFirstResponderChange;

+ (id)tapGestureInfoWithInteractionValue:(unsigned long long)a0 firstSubviewValue:(unsigned long long)a1 textInputValue:(unsigned long long)a2;
+ (id)controlInfoWithInteractionValue:(unsigned long long)a0 targetValue:(unsigned long long)a1 actionValue:(unsigned long long)a2 controlEvents:(unsigned long long)a3 textInputValue:(unsigned long long)a4;
+ (id)textFieldInfoWithInteractionValue:(unsigned long long)a0;
+ (id)tapGestureInfoWithInteractionValue:(unsigned long long)a0 firstSubviewValue:(unsigned long long)a1;
+ (id)controlInfoWithInteractionValue:(unsigned long long)a0;
+ (id)controlInfoWithInteractionValue:(unsigned long long)a0 targetValue:(unsigned long long)a1 actionValue:(unsigned long long)a2 controlEvents:(unsigned long long)a3 textInputValue:(unsigned long long)a4 shouldWaitForFirstResponderChange:(BOOL)a5;

@end
