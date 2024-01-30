@class MMCSController, NSString;

@interface MMCSRequestorContext : NSObject

@property (readonly, retain) MMCSController *controller;
@property (readonly, retain) NSString *transferID;

- (void)dealloc;
- (id)initWithController:(id)a0 transferID:(id)a1;
- (void)removeFromController;

@end
