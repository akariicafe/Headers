@interface ICTableActionMenu : NSObject {
    void /* unknown type, empty encoding */ completion;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ tableAttachmentViewController;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentingViewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentingBarButtonItem;

+ (id)menuWithTableAttachmentViewController:(id)a0 presentingViewController:(id)a1 presentingBarButtonItem:(id)a2 completion:(id /* block */)a3;
+ (id)menuWithTableAttachmentViewController:(id)a0 presentingViewController:(id)a1 presentingBarButtonItem:(id)a2 deferredChildren:(BOOL)a3 completion:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTableAttachmentViewController:(id)a0 presentingViewController:(id)a1 presentingBarButtonItem:(id)a2 completion:(id /* block */)a3;
- (id)menuSections;

@end
