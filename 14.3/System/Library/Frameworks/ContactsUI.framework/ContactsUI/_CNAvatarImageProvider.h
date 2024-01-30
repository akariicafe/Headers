@class NSString;
@protocol CNUIPRLikenessProvider;

@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider>

@property (readonly, nonatomic) id<CNUIPRLikenessProvider> likenessProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)roundImage:(id)a0;

@end
