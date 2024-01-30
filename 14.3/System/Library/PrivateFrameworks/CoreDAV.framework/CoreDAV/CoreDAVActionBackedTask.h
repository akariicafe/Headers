@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask

@property (retain, nonatomic) CoreDAVAction *backingAction;

- (void).cxx_destruct;
- (id)description;

@end
