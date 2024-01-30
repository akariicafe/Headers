@class NSString;

@interface TypistKeyboardDataInputUIClient : NSObject <TypistKeyboardDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dismissKeyboard;
+ (BOOL)hasMarkedText;
+ (id)markedText;
+ (void)showCandidateAtIndex:(long long)a0;
+ (id)setKeyboards:(id)a0;
+ (id)addKeyboardPopupKeys:(id)a0 keys:(id)a1 inPlane:(id)a2 addTo:(id)a3 keyplaneKeycaps:(id)a4;
+ (id)addKeyboards:(id)a0;
+ (struct CGPoint { double x0; double x1; })centerOfKey:(struct CGPoint { double x0; double x1; })a0 withOffset:(struct CGPoint { double x0; double x1; })a1;
+ (BOOL)connectToRemoteKeyboard:(double)a0;
+ (void)disconnectFromRemoteKeyboard;
+ (id)dismissOneTimeTIActions:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })findKeyBoundsInKeyboard:(id)a0;
+ (struct CGPoint { double x0; double x1; })floatingKeyboardDraggablePoint;
+ (id)generateKeyplaneSwitchTable:(id)a0;
+ (id)generateKeyplaneSwitchTableFor10Key:(id)a0;
+ (id)getAllCandidates;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCandidateBarRect;
+ (struct CGPoint { double x0; double x1; })getCandidateCenter:(id)a0;
+ (struct CGPoint { double x0; double x1; })getCandidateCenterAtIndex:(long long)a0;
+ (struct CGPoint { double x0; double x1; })getExtendedCandidateViewToggleButtonCenter;
+ (id)getKeyboardLayout:(id)a0;
+ (id)getKeyboardUISettings;
+ (id)getKeyplaneDescription:(id)a0;
+ (id)getRepresentedStringFromKey:(id)a0;
+ (id)getSentenceBoundaryStrings;
+ (id)getTIPreferences;
+ (id)getVisibleCandidateList:(id)a0;
+ (id)getVisibleKeyplaneName;
+ (BOOL)isExtendedCandidateViewMode;
+ (id)removeKeyboards:(id)a0;
+ (id)setKeyboardUISettings:(id)a0;
+ (id)setTIPreferences:(id)a0;
+ (BOOL)switchToKeyboard:(id)a0;
+ (BOOL)switchToPlane:(id)a0;
+ (void)tryConnection;


@end
