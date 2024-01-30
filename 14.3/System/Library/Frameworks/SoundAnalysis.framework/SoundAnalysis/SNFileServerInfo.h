@class NSString;

@interface SNFileServerInfo : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *idsDeviceID;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 idsDeviceID:(id)a1 model:(id)a2 name:(id)a3;

@end
