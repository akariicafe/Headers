@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask

@property (retain, nonatomic) CoreDAVAction *backingAction;

- (id)description;
- (void).cxx_destruct;

@end
