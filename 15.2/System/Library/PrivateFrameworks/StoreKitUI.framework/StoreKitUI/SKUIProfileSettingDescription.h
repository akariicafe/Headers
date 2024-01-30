@class NSString, UIImage, NSOperationQueue;

@interface SKUIProfileSettingDescription : SKUISettingDescription {
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) UIImage *photo;

+ (Class)_viewClassForSettingDescription:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewElement:(id)a0 parent:(id)a1;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;

@end
