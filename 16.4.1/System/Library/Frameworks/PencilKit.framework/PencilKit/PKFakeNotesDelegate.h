@class NSString, UITextView;

@interface PKFakeNotesDelegate : NSObject <PKScribbleInteractionDelegate> {
    UITextView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
