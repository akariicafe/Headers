@class NSString;

@interface PKAccountPostProvisioningContent : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *primaryButtonTitle;
@property (readonly, copy, nonatomic) NSString *secondaryButtonTitle;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
