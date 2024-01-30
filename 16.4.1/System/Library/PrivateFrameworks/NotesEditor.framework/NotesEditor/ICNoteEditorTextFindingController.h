@class NSObject;
@protocol OS_dispatch_queue;

@interface ICNoteEditorTextFindingController : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *textFindingQueue;

+ (id)textFindingResultsForPattern:(id)a0 textStorage:(id)a1 ignoreCase:(BOOL)a2 wholeWords:(BOOL)a3;
+ (BOOL)isWholeWordInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1;

@end
