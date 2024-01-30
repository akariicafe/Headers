@class NSUUID, NSString;

@interface SFTabEntity : NSObject

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *address;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 title:(id)a1 address:(id)a2;

@end
