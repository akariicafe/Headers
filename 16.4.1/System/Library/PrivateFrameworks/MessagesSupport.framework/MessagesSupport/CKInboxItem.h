@class NSUUID, CKInboxItemSwift, NSNumber;

@interface CKInboxItem : NSObject

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) CKInboxItemSwift *inboxItemSwift;
@property (readonly, copy, nonatomic) NSNumber *filterMode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 systemImage:(id)a2 accessoryText:(id)a3 filterMode:(id)a4 action:(id /* block */)a5;
- (void)updateAccessory:(id)a0;

@end
