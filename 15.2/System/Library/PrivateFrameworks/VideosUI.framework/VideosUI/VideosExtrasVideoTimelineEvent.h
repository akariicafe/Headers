@class IKLockupElement, NSString, UIImage;

@interface VideosExtrasVideoTimelineEvent : NSObject {
    IKLockupElement *_lockup;
    UIImage *_image;
}

@property (weak, nonatomic) VideosExtrasVideoTimelineEvent *next;
@property (nonatomic) BOOL isFirstEvent;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subHeader;
@property (readonly, weak, nonatomic) VideosExtrasVideoTimelineEvent *previous;

- (id)description;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0 prev:(id)a1;
- (void)loadImage:(id /* block */)a0;

@end
