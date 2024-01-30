@protocol SFFeedbackListener;

@interface WeakListener : NSObject {
    id<SFFeedbackListener> _weakListener;
}

@property (readonly, nonatomic) id<SFFeedbackListener> strongListener;

- (id)initWithListener:(id)a0;
- (void).cxx_destruct;

@end
