@interface MessageActivityViewController : UIActivityViewController {
    BOOL _sourceIsManaged;
}

@property (nonatomic) BOOL sourceIsManaged;

- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;

@end
