@class NSData, NSString;

@interface CNAvatarAccessoryView : NSObject <CNAvatarAccessoryView>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaContextBadgeWithImageData:(id)a0;
+ (id)badgeWithSystemImageNamed:(id)a0;


@end
