@interface MTFWrappedSpeechElement : NSObject

@property void *wrapped;
@property BOOL unOwned;
@property (readonly, nonatomic) int NumChildren;
@property (readonly, nonatomic) MTFWrappedSpeechElement *FirstChild;
@property (readonly, nonatomic) MTFWrappedSpeechElement *LastChild;
@property (readonly, nonatomic) MTFWrappedSpeechElement *Parent;
@property (readonly, nonatomic) MTFWrappedSpeechElement *NextSibling;
@property (readonly, nonatomic) MTFWrappedSpeechElement *PrevSibling;

+ (id)fromCPPElement:(void *)a0;

- (void)dealloc;
- (struct MTFESpeechElement { void /* function */ **x0; short x1; char x2; struct MTFESpeechElement *x3; struct MTFESpeechElement *x4; struct MTFESpeechElement *x5; struct MTFESpeechElement *x6; struct MTFESpeechElement *x7; } *)elem;
- (id)initWithCppElement:(void *)a0;

@end
