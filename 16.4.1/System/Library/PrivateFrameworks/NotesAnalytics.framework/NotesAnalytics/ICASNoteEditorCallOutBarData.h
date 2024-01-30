@class NSString, ICASNoteEditorCallOutBarButtonType;

@interface ICASNoteEditorCallOutBarData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASNoteEditorCallOutBarButtonType *noteEditorCallOutBarButtonType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteEditorCallOutBarButtonType:(id)a0;

@end
