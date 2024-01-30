@class ICFolder, ICNoteContext, NSString;

@interface ICCreateModernNoteAction : NSObject <ICCreateNoteAction>

@property (readonly, nonatomic) ICNoteContext *context;
@property (readonly, nonatomic) ICFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNoteContext:(id)a0 folder:(id)a1;
- (id)performWithTitle:(id)a0 contents:(id)a1 error:(id *)a2;

@end
