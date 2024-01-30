@class NSString, NSError;

@interface RMUIInteractiveProfileErrorViewModel : NSObject

@property (retain) NSString *title;
@property (retain) NSString *message;
@property (retain) NSString *okText;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithError:(id)a0 isActivating:(BOOL)a1;

@end
