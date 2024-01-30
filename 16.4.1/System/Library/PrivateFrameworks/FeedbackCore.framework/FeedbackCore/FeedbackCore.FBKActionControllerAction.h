@class NSString;

@interface FeedbackCore.FBKActionControllerAction : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ actionHandler;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ destructive;
@property (nonatomic, copy) id /* block */ actionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 actionHandler:(id /* block */)a2;

@end
