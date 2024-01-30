@class NSString, CNAvatarImageRenderer;

@interface GKLoadContactResourceOperation : GKLoadResourceOperation

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (readonly, copy, nonatomic) NSString *contactId;

+ (double)mainScreenScale;

- (void)main;
- (void).cxx_destruct;
- (id)initWithContactId:(id)a0;
- (id)makeFetchError;

@end
