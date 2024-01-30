@class NSString, BSAction, STKSessionAction;

@interface _STKRemoteAlertDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *viewControllerName;
@property (readonly, nonatomic) STKSessionAction *action;
@property (readonly, nonatomic) BSAction *BSAction;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAction:(id)a0 viewControllerName:(id)a1;

@end
