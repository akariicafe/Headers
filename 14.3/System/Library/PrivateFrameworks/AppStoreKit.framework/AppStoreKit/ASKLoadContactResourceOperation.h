@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (readonly, copy, nonatomic) NSString *contactId;

+ (double)mainScreenScale;

- (void).cxx_destruct;
- (void)main;
- (id)makeFetchError;
- (id)initWithContactId:(id)a0;

@end
