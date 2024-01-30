@class NSString;

@interface ICNoteBaseActivityItemSource : NSObject <UIActivityItemSourceAttachment>

@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 attachmentNameForActivityType:(id)a1;

@end
