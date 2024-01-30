@class ICNote, ICShareNoteExporter, NSString;

@interface ICNoteRTFDActivityItemSource : NSObject <UIActivityItemSource>

@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICShareNoteExporter *noteExporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithNote:(id)a0 noteExporter:(id)a1;

@end
