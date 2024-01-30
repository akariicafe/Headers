@protocol MediaServiceUpdatedClientDelegate;

@interface MSServiceUpdatedHandler : NSObject

@property (weak, nonatomic) id<MediaServiceUpdatedClientDelegate> delegate;

+ (id)shared;

- (void).cxx_destruct;
- (void)mediaServiceChanged:(id)a0 homeUserID:(id)a1;
- (void)mediaServiceRemoved:(id)a0 homeUserID:(id)a1;
- (void)defaultMediaServiceUpdated:(id)a0 homeUserID:(id)a1;

@end
