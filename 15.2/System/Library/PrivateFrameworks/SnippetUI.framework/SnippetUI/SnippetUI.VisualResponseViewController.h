@class NSString;
@protocol VRXInteractionDelegate;

@interface SnippetUI.VisualResponseViewController : UIViewController <VRXVisualResponse> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ responseView;
}

@property (nonatomic) long long currentIdiom;
@property (nonatomic) double snippetWidth;
@property (nonatomic, retain) id<VRXInteractionDelegate> interactionDelegate;
@property (nonatomic, readonly) NSString *description;

- (void)updateSharedState:(id)a0;
- (void)updateSharedStateData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
