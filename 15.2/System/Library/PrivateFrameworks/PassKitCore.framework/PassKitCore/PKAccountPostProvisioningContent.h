@class NSString;

@interface PKAccountPostProvisioningContent : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *primaryButtonTitle;
@property (readonly, copy, nonatomic) NSString *secondaryButtonTitle;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
