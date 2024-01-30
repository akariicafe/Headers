@class ICUnifiedNoteContext;

@interface ICCreateNoteAction : NSObject

@property (readonly, nonatomic) ICUnifiedNoteContext *noteContext;

- (void).cxx_destruct;
- (id)initWithNoteContext:(id)a0;
- (id)performWithTitle:(id)a0 contents:(id)a1 container:(id)a2 error:(id *)a3;

@end
