@class NSString;

@interface _SFSectionAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)toggleSectionExpandedAction;
+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;

@end
