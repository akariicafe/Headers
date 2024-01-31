@class CNContactImage, CNContactPoster;

@interface CNAvatarPosterCarouselEditingContext : NSObject

@property (retain, nonatomic) CNContactPoster *existingPoster;
@property (retain, nonatomic) CNContactImage *existingAvatar;
@property (readonly, nonatomic) BOOL isEditingExisting;
@property (retain, nonatomic) CNContactPoster *updatedPoster;
@property (retain, nonatomic) CNContactImage *updatedAvatar;

+ (id)contextForCreateNew;
+ (id)contextWithExistingPoster:(id)a0 existingAvatar:(id)a1;

- (void).cxx_destruct;
- (id)initWithExistingPoster:(id)a0 existingAvatar:(id)a1;

@end
