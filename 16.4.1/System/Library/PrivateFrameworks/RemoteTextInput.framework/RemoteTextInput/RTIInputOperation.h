@class NSString, NSObject, TIKeyboardInput;
@protocol NSSecureCoding;

@interface RTIInputOperation : NSObject <NSSecureCoding, RTICustomDataProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TIKeyboardInput *keyboardInput;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) int inputModality;
@property (retain, nonatomic) NSString *customInfoType;
@property (retain, nonatomic) NSObject<NSSecureCoding> *customInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1;
+ (void)unregisterCustomInfoType:(id)a0;

@end
