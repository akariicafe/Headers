@class NSString;
@protocol ICLegacyContext, ICLegacyFolder;

@interface ICCreateHTMLNoteAction : NSObject <ICCreateNoteAction>

@property (readonly, nonatomic) id<ICLegacyContext> context;
@property (readonly, nonatomic) id<ICLegacyFolder> folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHTMLNoteContext:(id)a0 folder:(id)a1;
- (id)performWithTitle:(id)a0 contents:(id)a1 error:(id *)a2;

@end
