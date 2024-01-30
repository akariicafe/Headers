@class NSString;
@protocol TIKeyboardInputManagerToImplProtocol;

@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol>

@property (nonatomic) id<TIKeyboardInputManagerToImplProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processPayloadInfo:(id)a0;
- (void)pushAutocorrections:(id)a0 requestToken:(id)a1;

@end
