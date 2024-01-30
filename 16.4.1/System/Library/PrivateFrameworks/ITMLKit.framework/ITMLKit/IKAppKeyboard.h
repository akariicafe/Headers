@class NSString, NSArray, IKJSKeyboard, JSManagedValue, JSValue, IKAppContext;
@protocol IKAppKeyboardDelegate;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {
    JSManagedValue *_jsHints;
}

@property (weak, nonatomic, setter=setJSKeyboard:) IKJSKeyboard *jsKeyboard;
@property (copy, nonatomic, getter=_source, setter=_setSource:) NSString *source;
@property (weak, nonatomic) id<IKAppKeyboardDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *hints;
@property (copy, nonatomic, setter=setJSText:) NSString *jsText;
@property (copy, nonatomic, setter=setJSSource:) NSString *jsSource;
@property (copy, nonatomic, setter=setJSHints:) JSValue *jsHints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

@end
