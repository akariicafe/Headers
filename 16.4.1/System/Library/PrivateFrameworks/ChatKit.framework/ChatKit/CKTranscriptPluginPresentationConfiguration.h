@class UIView;

@interface CKTranscriptPluginPresentationConfiguration : NSObject

@property (readonly, weak, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) unsigned long long permittedArrowDirections;
@property (readonly, nonatomic) BOOL shouldDisableSnapshotView;

- (void).cxx_destruct;
- (id)initWithSourceView:(id)a0 permittedArrowDirections:(unsigned long long)a1 shouldDisableSnapshotView:(BOOL)a2;

@end
