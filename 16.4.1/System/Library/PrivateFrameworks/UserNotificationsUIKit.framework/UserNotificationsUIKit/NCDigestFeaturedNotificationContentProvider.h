@class UIImage;
@protocol NCNotificationListComponentDelegate;

@interface NCDigestFeaturedNotificationContentProvider : NCNotificationRequestCoalescingContentProvider {
    unsigned long long _groupCount;
    UIImage *_cachedFeaturedAttachmentImage;
}

@property (nonatomic) double cachedImageSizeRatio;
@property (readonly, nonatomic) BOOL hasAttachmentImage;
@property (copy, nonatomic) id /* block */ defaultActionBlock;
@property (weak, nonatomic) id<NCNotificationListComponentDelegate> listComponentDelegate;
@property (nonatomic) unsigned long long appNotificationCount;

+ (id)featuredImageFetchQueue;

- (id)thumbnail;
- (id)initWithNotificationRequest:(id)a0;
- (id)primaryText;
- (id)initWithNotificationRequest:(id)a0 groupCount:(unsigned long long)a1;
- (BOOL)_shouldShowContent;
- (void).cxx_destruct;
- (void)fetchFeaturedAttachmentImageWithSizeRatio:(double)a0 completion:(id /* block */)a1;

@end
