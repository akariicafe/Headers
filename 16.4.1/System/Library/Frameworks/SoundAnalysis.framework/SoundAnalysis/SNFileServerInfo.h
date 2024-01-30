@class NSString;

@interface SNFileServerInfo : NSObject {
    NSString *_identifier;
    NSString *_idsDeviceID;
    NSString *_model;
    NSString *_name;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *idsDeviceID;
@property (readonly) NSString *model;
@property (readonly) NSString *name;

- (void).cxx_destruct;

@end
