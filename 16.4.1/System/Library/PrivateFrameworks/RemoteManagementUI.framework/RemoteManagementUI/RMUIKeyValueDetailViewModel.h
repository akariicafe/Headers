@class NSString;

@interface RMUIKeyValueDetailViewModel : NSObject

@property (readonly) NSString *viewID;
@property (retain) NSString *title;
@property (retain) NSString *value;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 value:(id)a1;
- (void)clearModel;

@end
