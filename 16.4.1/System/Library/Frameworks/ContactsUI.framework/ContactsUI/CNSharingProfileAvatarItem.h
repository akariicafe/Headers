@class NSString, NSData;

@interface CNSharingProfileAvatarItem : NSObject

@property (readonly, copy, nonatomic) id /* block */ imageProvider;
@property (readonly, copy, nonatomic) id /* block */ originalImageProvider;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *variantIdentifier;
@property (nonatomic) BOOL wasSetFromFullPhotoPicker;
@property (nonatomic) NSData *memojiMetadata;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id /* block */)a0 originalImageProvider:(id /* block */)a1 type:(long long)a2;
- (id)initWithImageProvider:(id /* block */)a0 type:(long long)a1;

@end
