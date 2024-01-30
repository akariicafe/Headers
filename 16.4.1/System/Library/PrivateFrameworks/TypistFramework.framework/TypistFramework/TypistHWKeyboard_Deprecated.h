@class NSMutableDictionary, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TypistHWKeyboard_Deprecated : NSObject

@property (nonatomic) struct __IOHIDUserDevice { } *emulatedKeyboard;
@property (nonatomic) struct __GSKeyboard { } *hardwareKeyboard;
@property (retain, nonatomic) NSNumber *keyboardCountryCode;
@property (retain, nonatomic) NSMutableDictionary *characterToKeycodeMap;
@property (retain, nonatomic) NSString *emulatedModel;
@property (nonatomic) unsigned int hidKeyboardType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *TypistHWKeyboardQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) double typeInterval;

+ (id)modifierCharMap;
+ (unsigned int)GSEventMaskToKeyboardMask:(unsigned int)a0;
+ (unsigned char)_convertCountryCodeToHIDKeyboardType:(unsigned char)a0;
+ (unsigned char)_convertGSKeyboardTypeToIOHIDKeyboardType:(unsigned char)a0;
+ (unsigned char)_convertHIDKeyboardTypeToGSKeyboardType:(unsigned int)a0;
+ (id)_determineAppropriatePropertyDictionaryForHWModelStr:(id)a0;
+ (id)_getModifierMaskMap;
+ (id)keyboardCountryCodes;

- (id)initWithCountryCode:(id)a0;
- (void).cxx_destruct;
- (void)detach:(id /* block */)a0;
- (void)_insertKey:(unsigned short)a0 gsKeyInfo:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5[24]; unsigned short x6; unsigned short x7[24]; unsigned short x8; unsigned short x9[24]; unsigned short x10; unsigned short x11; } *)a1;
- (void)_setupCharacterToKeycodeMap;
- (id)generateKeystrokeStream:(id)a0;
- (id)generateKeystrokeStream:(id)a0 position:(int *)a1;
- (id)initWithCountryCode:(id)a0 andPropertyDictionaryAtPath:(id)a1;
- (void)pressAndHoldKey:(id)a0 completion:(id /* block */)a1;
- (void)releaseKeyPressWithCompletion:(id /* block */)a0;
- (void)typeKeyStrokeStream:(id)a0;
- (void)typeString:(id)a0 completion:(id /* block */)a1;

@end
